int lengthOfLongestSubstring(char* s) {
    int i = 0;
    int largest = 0;
    int f = 0;

    int n = 0;
    while (s[n] != '\0') n++;  

    int *length = (int*)calloc(n, sizeof(int));

    while (s[i] != '\0') {
        for(int j = f; j < i; j++) {
            if(s[j] == s[i]) {
                f = j+1;
                break;
            } 
        }

        length[i] = i - f + 1;
        i += 1;
    }

    for(int k = 0; k < i; k++) {
        if (length[k] > largest) {
                largest = length[k];
            }
        }

    free(length);
    return largest;
}
