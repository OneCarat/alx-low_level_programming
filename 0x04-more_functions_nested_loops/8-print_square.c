void print_square(int size) {
    if (size <= 0) {
        putchar('\n');  // Print a new line if size is 0 or less
    } else {
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                putchar('#');  // Print the character '#' for each position in the square
            }
            putchar('\n');  // Print a new line after each row of the square
        }
    }
}

