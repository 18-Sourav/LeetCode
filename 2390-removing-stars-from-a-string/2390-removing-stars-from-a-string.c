char* removeStars(char* s) {
    char *res = malloc(sizeof(char)*strlen(s)+1);
    int top = -1,i = 0;
    while(s[i])
    {
        if(s[i]!='*')
            res[++top] = s[i];
        else
            top--;
        i++;        
    }
    res[++top]='\0';
    return res;
}