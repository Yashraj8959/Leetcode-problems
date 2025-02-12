class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int sum = 0;
        int nsum=n*(n+1)/2;
        
        cout<<nsum<<endl;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        cout<<sum;
        k=nsum-sum;

        return k;
    }
};