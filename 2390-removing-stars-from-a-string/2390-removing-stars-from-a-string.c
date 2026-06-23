char* removeStars(char* s) {
    char *stack = malloc(sizeof(char)*strlen(s)+1);
    int top = -1;
    int i = 0;
    while(s[i])
    {
        if(s[i]!='*')
            stack[++top] = s[i];
        else
            top--;
        i++;        
    }
    stack[++top]='\0';
    return stack;
}