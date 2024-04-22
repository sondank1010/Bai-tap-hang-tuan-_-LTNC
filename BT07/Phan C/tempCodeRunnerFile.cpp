void delete_char(char a[], char c) {
    int length = strlen(a);
    int j;
    for (int i = 0; i < length; i++) {
        while (*(a + i) == c) {
            for (j = i; j < length - 1; j++) {
               *(a+j) = *(a+ j + 1);
            }
            *(a + j) = '\0';
            length--; 
            
        }
    }
}