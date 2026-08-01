int my_max(int a,int b)
{
    return a>b? a:b;
}
int my_min(int a, int b)
{
    return a<b? a:b;   
}

//funtion to calculate the best pickup for only player-1
int solve(int i , int j, int *nums)
{
    if(i>j)
        return 0;
    if(i == j)
        return nums[i];  
    //Selecting both the possibilities    
    int i_select = nums[i] + my_min(solve(i+2,j,nums), solve(i+1,j-1,nums)); 

    int j_select = nums[j] + my_min(solve(i,j-2,nums), solve(i+1,j-1,nums));

    return my_max(i_select, j_select);      
}

bool predictTheWinner(int* nums, int numsSize) {
    int sum = 0;
    for(int i=0;i<numsSize;i++)
        sum+=nums[i];
    int player_1 = solve(0,numsSize-1,nums);

    int player_2 = sum - player_1;

    return player_1 >= player_2;

}