void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer
}
