for (int i = 0; i < len2 - len1 + 1; i++) {
    char * tmp = new char[len1 + 1];
    strcpy(tmp, c2 + i, len1 );
    tmp[len1] = '\0';
    int r = strcmp(tmp, c1);
    if(r == 0) count++;
    delete[] tmp;
    }