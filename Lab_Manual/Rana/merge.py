import PyPDF2

def merge_pdfs(main_file, insert_files, output_file):
    # Open the main PDF file
    with open(main_file, 'rb') as main_pdf:
        main_reader = PyPDF2.PdfReader(main_pdf)
        main_writer = PyPDF2.PdfWriter()
        
        # Iterate through all pages of the main file
        for i in range(len(main_reader.pages)):
            main_writer.add_page(main_reader.pages[i])
            
            # Insert PDFs at specific positions
            if i == 3:  # After page 4
                insert_pdf(main_writer, insert_files['1.pdf'])
            elif i == 6:  # After page 7
                insert_pdf(main_writer, insert_files['2.pdf'])
            elif i == 8:  # After page 9
                insert_pdf(main_writer, insert_files['3.pdf'])
            elif i == 17:  # After page 18
                insert_pdf(main_writer, insert_files['5.pdf'])

        # Force save to output file, overwriting if it exists
        with open(output_file, 'wb') as output_pdf:
            main_writer.write(output_pdf)

def insert_pdf(writer, insert_file):
    with open(insert_file, 'rb') as pdf:
        reader = PyPDF2.PdfReader(pdf)
        for page in reader.pages:
            writer.add_page(page)

# Define the main PDF file and the PDFs to be inserted
main_pdf_file = "lm_evotyindia_rana_24bca40.pdf"
insert_files = {
    '1.pdf': '1.pdf',
    '2.pdf': '2.pdf',
    '3.pdf': '3.pdf',
    '5.pdf': '5.pdf'
}
output_file = "lm_evotyindia_rana_24bca40.pdf"  # Output file name, same as input to overwrite

# Call the function to merge PDFs
merge_pdfs(main_pdf_file, insert_files, output_file)
