import PyPDF2

def merge_pdfs(main_file, insert_files):
    # Open the main PDF file
    with open(main_file, 'rb') as main_pdf:
        main_reader = PyPDF2.PdfReader(main_pdf)
        main_writer = PyPDF2.PdfWriter()
        
        # Iterate through all pages of the main file
        for i in range(len(main_reader.pages)):
            main_writer.add_page(main_reader.pages[i])
            
            # Insert PDFs at specific positions
            if i == 2:  # After page 3
                insert_pdf(main_writer, insert_files['1.pdf'])
            elif i == 5:  # After page 6
                insert_pdf(main_writer, insert_files['2.pdf'])
            elif i == 7:  # After page 8
                insert_pdf(main_writer, insert_files['3.pdf'])
            elif i == 17:  # After page 18
                insert_pdf(main_writer, insert_files['5.pdf'])

        # Write the new PDF to file
        with open("merged_output.pdf", 'wb') as output_pdf:
            main_writer.write(output_pdf)

def insert_pdf(writer, insert_file):
    with open(insert_file, 'rb') as pdf:
        reader = PyPDF2.PdfReader(pdf)
        for page in reader.pages:
            writer.add_page(page)

# Define the main PDF file and the PDFs to be inserted
main_pdf_file = "BCL103_24BCA004_evotyindia_2024-25.pdf"
insert_files = {
    '1.pdf': '1.pdf',
    '2.pdf': '2.pdf',
    '3.pdf': '3.pdf',
    '5.pdf': '5.pdf'
}

# Call the function to merge PDFs
merge_pdfs(main_pdf_file, insert_files)
