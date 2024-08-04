void clear_input_buffer() {
    int c;// variable
    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer
}
