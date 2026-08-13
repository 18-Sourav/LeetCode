#include <string.h>

int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int t_time = 0;
    
    for (int i = 1; i < neededTimeSize; i++) 
    {
        if (colors[i] == colors[i - 1])
        {
            if (neededTime[i] < neededTime[i - 1]) 
            {
                t_time += neededTime[i];
                neededTime[i] = neededTime[i - 1]; 
            } 
            else 
               t_time += neededTime[i - 1];
        }
    }  
    return t_time;
}
