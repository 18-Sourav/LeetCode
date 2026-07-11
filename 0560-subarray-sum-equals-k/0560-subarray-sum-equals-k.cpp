class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
   
    unordered_map<int,int>mp; //this will have the frequency of each prefix_sum
    mp[0] = 1; //for empty prefix sum
    int prefix_sum = 0;
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        prefix_sum+=nums[i];  //finding the current prefix_sum

        if(mp.find(prefix_sum - k)!= mp.end())  // checking if the balance sum exists in the map 
            count+=mp[prefix_sum-k];            // adding the count  of the required balance prefix sum
        mp[prefix_sum]++;                       //updating the map with the current sum freq
    }
    return count;
    }
};