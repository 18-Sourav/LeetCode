int longestBeautifulSubstring(char* word) {
    int left = 0,right = 1;
    int max_len =0,vowel_cnt=1;

    while(word[left])
    {
        if(word[right]<word[right-1])
        {
            left = right;
            vowel_cnt = 1;
        }
        else
        {
            if(word[right]!=word[right-1])
                vowel_cnt++;
        }
        int curr_len = right -left +1;

        if(curr_len>max_len && vowel_cnt ==5)
            max_len = curr_len;
           
        if(word[right])    
            right++;    
    }
    return max_len;
}