class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int c_sum = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
        }
        int result =0;
        //sum and index;
        mp[0] = -1;

        for(int i=0;i<nums.size();i++)
        {
            c_sum +=nums[i];  //finding the cumulative sum
            if(mp.find(c_sum)!=mp.end())   //searching the previous occurence of the c_sum
                result = max(result, i-mp[c_sum]);  //finding the length of the subarray
            else
                mp[c_sum] = i;
        }
        return result;           

    }
};