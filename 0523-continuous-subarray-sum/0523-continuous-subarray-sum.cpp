class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int sum = 0;
        unordered_map<int,int>mp; //To store the remainder and the respective index
        mp[0] = -1; //this will ensure if complete array itself is the answer then we can compare in map

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int remainder =  sum % k;

            if(mp.find(remainder) != mp.end()) //checking if this remainder is present in map or not
            {
                if(i - mp[remainder]>=2)  // checking if the subarray length is greater than 1
                    return true;
            }
            else
                mp[remainder] = i;     //If not found then adding our remainder in the map
            
        }
          return false;
    }
  
};