import PyPDF2

def insert_multiple_pdfs(main_pdf_path, output_pdf_path, inserts):
    # Open the main PDF
    with open(main_pdf_path, "rb") as main_pdf_file:
        main_reader = PyPDF2.PdfReader(main_pdf_file)
        main_writer = PyPDF2.PdfWriter()
        
        # Track the current position in the `inserts` list
        insert_index = 0
        
        for page_num in range(len(main_reader.pages)):
            # Add the current page from the main PDF
            main_writer.add_page(main_reader.pages[page_num])
            
            # Check if we need to insert a PDF after this page
            if insert_index < len(inserts) and page_num + 1 == inserts[insert_index][0]:
                insert_pdf_path = inserts[insert_index][1]
                
                # Open the insert PDF and add its pages
                with open(insert_pdf_path, "rb") as insert_pdf_file:
                    insert_reader = PyPDF2.PdfReader(insert_pdf_file)
                    for insert_page in insert_reader.pages:
                        main_writer.add_page(insert_page)
                
                # Move to the next insertion point
                insert_index += 1
        
        # Save the final PDF with the inserted pages
        with open(output_pdf_path, "wb") as output_pdf_file:
            main_writer.write(output_pdf_file)
    
    print(f"Modified PDF saved as: {output_pdf_path}")

# File paths
main_pdf_path = "bhumi_lm_evotyindia_pre.pdf"
output_pdf_path = "bhumi_lm_evotyindia_pre_modified.pdf"

# Insertion points: (insert after page number, file to insert)
inserts = [
    (4, "1.pdf"),  # Insert `1.pdf` after page 4
    (7, "2.pdf"),  # Insert `2.pdf` after page 7
    (9, "3.pdf"),  # Insert `3.pdf` after page 9
    (18, "5.pdf")  # Insert `5.pdf` after page 18
]

# Run the function
insert_multiple_pdfs(main_pdf_path, output_pdf_path, inserts)
