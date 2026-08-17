class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int max_len = 0;
        unordered_map<int,int>freq_map; //to store the elements and its count

        int left=0,right=0;
        int size = nums.size();

        for(;right<size;right++)
        {
            freq_map[nums[right]]++;
        
            while(freq_map[nums[right]]>k)
            {
                freq_map[nums[left]]--;
                left++;
            }
            int curr_len = right-left+1;
            if(curr_len>max_len)
                max_len = curr_len;   
        }
        return max_len;
    }
};