bool isOneBitCharacter(int* bits, int n) {
    int i;
    //jump once for 0 , twice for 1. if you land on the last
    //index then you've landed on 1 bit character
    for(i = 0 ; i < n - 1; i++)
        i += bits[i];
    return i == n - 1;
}