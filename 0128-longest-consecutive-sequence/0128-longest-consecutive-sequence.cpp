class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        sort(nums.begin(), nums.end());
        int currSeq = 1;
        int longestSeq = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    currSeq++;
                }
                else{
                    longestSeq = max(longestSeq, currSeq);
                    currSeq = 1;
                }
            }
        }
        return max(longestSeq, currSeq);
    
    }
};

