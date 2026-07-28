void countSort(char str[]) {
    int len = strlen(str);
    char output[len + 1]; // +1 for the null character

    // Step 1: Initialize and populate frequency array
    int count[256] = {0}; 
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Step 2: Change count[i] so it contains the actual position
    for (int i = 1; i < 256; i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Build the output character array
    // Operating backwards preserves stability
    for (int i = len - 1; i >= 0; i--) {
        output[count[(unsigned char)str[i]] - 1] = str[i];
        count[(unsigned char)str[i]]--;
    }

    // Copy the sorted elements back to original string
    for (int i = 0; i < len; i++) {
        str[i] = output[i];
    }
    
    // Ensure original string remains correctly null-terminated
    str[len] = '\0'; 
}
char* smallestPalindrome(char* s) {
    int len = strlen(s);
    char *result = malloc(len+1);

    for(int i=0;i<len/2;i++)
        result[i] = s[i];
    
    result[len/2] ='\0';
    countSort(result);

    if (len % 2)
    result[len/2] = s[len/2];
    
    for(int i=0;i<len/2;i++)
        result[len-i-1]= result[i];
    
    result[len]='\0';
    return result;
}