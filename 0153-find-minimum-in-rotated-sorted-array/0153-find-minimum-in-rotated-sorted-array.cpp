class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int last = nums.size()-1;
        while(first<last){
            int mid = first + (last - first)/2;
            if(nums[mid]>nums[last]){
                first = mid + 1;
            }
            else last = mid;
        }
        return nums[first];
    }
};