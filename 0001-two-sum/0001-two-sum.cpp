class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0; i<nums.size();i++){
            if(m.contains(target-nums[i])){
                return { m[target-nums[i]], i};

            }
            else {
                m.insert({nums[i],i});

            }
        }
        return {-1,-1};
    }
};