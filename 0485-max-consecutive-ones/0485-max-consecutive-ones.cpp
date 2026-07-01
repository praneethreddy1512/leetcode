class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,maxcount = 0;
        for(auto k:nums){
            if(k == 1){
                count++;
                maxcount = max(maxcount,count);
            }else{
                count = 0;
            }
        }
        return maxcount;
    }
};