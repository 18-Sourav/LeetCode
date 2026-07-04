int prefixCount(char** words, int wordsSize, char* prefix) {
    
    int ans = 0;
    char* str = NULL;

    for(int i = 0; i < wordsSize; i++)
    {
        if(str = (strstr(words[i], prefix)))
        {
            if(str == words[i])
            ans++;
        }
    }

    return ans;
}