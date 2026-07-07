int maxProduct(char** words, int wordsSize) {
    
    int max_prod = 0;
    unsigned int arr[wordsSize] ;
    int size[wordsSize] ;
    for(int i=0;i<wordsSize;i++)
    {
        int j=0;
        arr[i] = 0;
        size[i] = 0;
        while(words[i][j]!='\0')
        {
            unsigned char index = words[i][j]-'a';
            arr[i]|= (1U<<index);
            j++;
        }
        size[i] = j;
    }
    for(int i=0;i<wordsSize-1;i++)
        for(int j=i+1;j<wordsSize;j++)
            if((arr[i]&arr[j])==0)
                if((size[i]*size[j])>max_prod)                
                    max_prod = size[i]*size[j];   
                    
    return max_prod;
}