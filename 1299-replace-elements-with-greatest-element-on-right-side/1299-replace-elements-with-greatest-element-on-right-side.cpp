class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1); // Initialize ans with -1 for all elements
        int max_right = arr[n - 1]; 

        for (int i = n - 2; i >= 0; --i) {
            ans[i] = max_right; 
            max_right = max(max_right, arr[i]); 
        }

        return ans;
    }
};