#include <string.h>

int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int total_cost = 0;
    
    for (int i = 1; i < neededTimeSize; i++) 
    {
        if (colors[i] == colors[i - 1])
        {
            if (neededTime[i] < neededTime[i - 1]) 
            {
                total_cost += neededTime[i];
                neededTime[i] = neededTime[i - 1]; 
            } 
            else 
               total_cost += neededTime[i - 1];
        }
    }
    
    return total_cost;
}
