import shutil
import PyPDF2
import os

def backup_file(file_path, backup_path):
    shutil.copyfile(file_path, backup_path)
    print(f"Backup created at {backup_path}")

def restore_file(backup_path, original_path):
    shutil.copyfile(backup_path, original_path)
    print(f"File restored to original at {original_path}")

def merge_pdfs(main_file, insert_files, output_file):
    with open(main_file, 'rb') as main_pdf:
        main_reader = PyPDF2.PdfReader(main_pdf)
        main_writer = PyPDF2.PdfWriter()
        
        for i in range(len(main_reader.pages)):
            main_writer.add_page(main_reader.pages[i])
            
            if i == 3:  
                insert_pdf(main_writer, insert_files['1.pdf'])
            elif i == 6:  
                insert_pdf(main_writer, insert_files['2.pdf'])
            elif i == 8:  
                insert_pdf(main_writer, insert_files['3.pdf'])
            elif i == 17:  
                insert_pdf(main_writer, insert_files['5.pdf'])

        with open(output_file, 'wb') as output_pdf:
            main_writer.write(output_pdf)

def insert_pdf(writer, insert_file):
    with open(insert_file, 'rb') as pdf:
        reader = PyPDF2.PdfReader(pdf)
        for page in reader.pages:
            writer.add_page(page)

# Paths for the main file and backup
main_pdf_file = "lm_evotyindia_rana_24bca40.pdf"
backup_pdf_file = "lm_evotyindia_rana_24bca40_backup.pdf"
insert_files = {
    '1.pdf': '1.pdf',
    '2.pdf': '2.pdf',
    '3.pdf': '3.pdf',
    '5.pdf': '5.pdf'
}

# Step 1: Backup original file
backup_file(main_pdf_file, backup_pdf_file)

# Step 2: Merge PDFs (this will overwrite the original)
merge_pdfs(main_pdf_file, insert_files, main_pdf_file)

# To restore the original file from backup if needed, uncomment the line below
# restore_file(backup_pdf_file, main_pdf_file)
