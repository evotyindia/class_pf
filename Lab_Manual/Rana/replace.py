import PyPDF2
import shutil

def replace_page_with_pdf(input_pdf, insert_pdf, output_pdf, backup_pdf, replace_page_num):
    # Step 1: Create a backup of the original input PDF
    shutil.copyfile(input_pdf, backup_pdf)
    print(f"Backup created: {backup_pdf}")
    
    # Step 2: Open the main PDF and prepare the writer
    with open(input_pdf, "rb") as main_pdf_file:
        main_reader = PyPDF2.PdfReader(main_pdf_file)
        main_writer = PyPDF2.PdfWriter()
        
        # Step 3: Copy pages, skipping the one to be replaced, and insert the new PDF pages
        for page_num in range(len(main_reader.pages)):
            # Skip the page to replace
            if page_num == replace_page_num - 1:  # Convert 1-based to 0-based index
                continue

            # Add current page to writer
            main_writer.add_page(main_reader.pages[page_num])

            # Insert new PDF pages in place of the removed page
            if page_num == replace_page_num - 2:  # Insert after the preceding page
                with open(insert_pdf, "rb") as insert_pdf_file:
                    insert_reader = PyPDF2.PdfReader(insert_pdf_file)
                    for insert_page in insert_reader.pages:
                        main_writer.add_page(insert_page)
        
        # Step 4: Save the modified PDF to the output path
        with open(output_pdf, "wb") as output_pdf_file:
            main_writer.write(output_pdf_file)
    
    print(f"Modified PDF saved as: {output_pdf}")

# File paths
input_pdf = "lm_evotyindia_rana_24bca40.pdf"
backup_pdf = "lm_evotyindia_rana_24bca40_backup.pdf"
output_pdf = "lm_evotyindia_rana_24bca40_modified.pdf"
insert_pdf = "haru.pdf"
replace_page_num = 43  # Page to replace (1-based)

# Run the function
replace_page_with_pdf(input_pdf, insert_pdf, output_pdf, backup_pdf, replace_page_num)
