class Solution {
public:

        void mergearr(vector<int>& nums, int first, int mid, int last){
            vector<int> temp;
            int i = first;
            int j = mid+1;
            while(i<= mid && j<= last){
                if(nums[i]<=nums[j]){
                    temp.push_back(nums[i]);
                    i++;
                }
                else {
                    temp.push_back(nums[j]);
                    j++;
                }
            }
            while(i<=mid){
                temp.push_back(nums[i]);
                i++;
            }
            while(j<=last){
                temp.push_back(nums[j]);
                j++;
            }
            for( int idx=0; idx<temp.size(); idx++){
                nums[idx + first] = temp[idx];
            }
        }
        void mergesort(vector<int>& nums, int first, int last){
            if(first<last){
            int mid = first + (last -first)/2;
                mergesort(nums, first, mid);
                mergesort(nums, mid+1, last);
                mergearr(nums, first, mid, last);
            }
        }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        
        mergesort(nums, 0, n-1);
        return nums;
    }
};