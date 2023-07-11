Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.


Solution:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for (int i=0 ; i<n;i++){
            int num=nums[i];
            int needed=target-num;
            if(mpp.find(needed) != mpp.end()){
                return {mpp[needed],i};
            }
            mpp[num]=i;
        };
        return{-1,-1};
    }
};
