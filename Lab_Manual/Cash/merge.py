import PyPDF2
import shutil

def insert_pdfs(main_pdf_path, output_pdf_path, inserts, backup_pdf_path):
    # Step 1: Create a backup of the main PDF file
    shutil.copyfile(main_pdf_path, backup_pdf_path)
    print(f"Backup created: {backup_pdf_path}")
    
    # Step 2: Open the main PDF
    with open(main_pdf_path, "rb") as main_pdf_file:
        main_reader = PyPDF2.PdfReader(main_pdf_file)
        main_writer = PyPDF2.PdfWriter()
        
        # Step 3: Insert PDFs at specified positions
        insert_index = 0  # Track current position in `inserts`
        for page_num in range(len(main_reader.pages)):
            # Add original page to writer
            main_writer.add_page(main_reader.pages[page_num])
            
            # Check if we need to insert a PDF after this page
            if insert_index < len(inserts) and page_num + 1 == inserts[insert_index][0]:
                insert_pdf_path = inserts[insert_index][1]
                with open(insert_pdf_path, "rb") as insert_pdf_file:
                    insert_reader = PyPDF2.PdfReader(insert_pdf_file)
                    for insert_page in insert_reader.pages:
                        main_writer.add_page(insert_page)
                insert_index += 1  # Move to the next insert instruction
        
        # Step 4: Save the modified PDF with inserts
        with open(output_pdf_path, "wb") as output_pdf_file:
            main_writer.write(output_pdf_file)
    
    print(f"Modified PDF saved as: {output_pdf_path}")

# Paths for input and output files
main_pdf_path = "cash_lm_evotyindia.pdf"
backup_pdf_path = "cash_lm_evotyindia_backup.pdf"
output_pdf_path = "cash_lm_evotyindia_modified.pdf"

# Insert positions and corresponding PDF files
# (Position is 1-based page number where new file will be inserted)
inserts = [
    (4, "1.pdf"),  # Insert `1.pdf` after page 4
    (7, "2.pdf"),  # Insert `2.pdf` after page 7
    (9, "3.pdf"),  # Insert `3.pdf` after page 9
    (18, "5.pdf")  # Insert `5.pdf` after page 18
]

# Run the function
insert_pdfs(main_pdf_path, output_pdf_path, inserts, backup_pdf_path)
