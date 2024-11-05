import PyPDF2
import shutil

def modify_pdf(input_pdf, insert_pdf, output_pdf, backup_pdf, remove_page_num, insert_after_page):
    # Step 1: Create a backup of the original input PDF
    shutil.copyfile(input_pdf, backup_pdf)
    print(f"Backup created: {backup_pdf}")
    
    # Step 2: Open the main PDF and prepare the writer
    with open(input_pdf, "rb") as main_pdf_file:
        main_reader = PyPDF2.PdfReader(main_pdf_file)
        main_writer = PyPDF2.PdfWriter()
        
        # Step 3: Copy pages except the one to be removed, and insert new PDF at the specified position
        for page_num in range(len(main_reader.pages)):
            # Skip the page to remove
            if page_num == remove_page_num - 1:  # Convert 1-based to 0-based index
                continue

            # Add current page to writer
            main_writer.add_page(main_reader.pages[page_num])

            # Insert new PDF after the specified page
            if page_num + 1 == insert_after_page:
                with open(insert_pdf, "rb") as insert_pdf_file:
                    insert_reader = PyPDF2.PdfReader(insert_pdf_file)
                    for insert_page in insert_reader.pages:
                        main_writer.add_page(insert_page)
        
        # Step 4: Save the modified PDF to the output path
        with open(output_pdf, "wb") as output_pdf_file:
            main_writer.write(output_pdf_file)
    
    print(f"Modified PDF saved as: {output_pdf}")

# File paths
input_pdf = "lm_evotyindia_ridhima_sharma_24bca33.pdf"
backup_pdf = "lm_evotyindia_ridhima_sharma_24bca33_backup.pdf"
output_pdf = "lm_evotyindia_ridhima_sharma_24bca33_modified.pdf"
insert_pdf = "haru.pdf"
remove_page_num = 38      # Page to remove (1-based)
insert_after_page = 37    # Page after which to insert `haru.pdf`

# Run the function
modify_pdf(input_pdf, insert_pdf, output_pdf, backup_pdf, remove_page_num, insert_after_page)
