int scoreOfParentheses(char* s) {
    int depth = 0;
    int score = 0;
    for(int i = 1 ; s[i] ; i++){
        if(s[i] == '(')
            depth++;
        else if(s[i-1] == '(')
            score += 1 << depth--;
        else
            depth--;
    }
    return score;
}