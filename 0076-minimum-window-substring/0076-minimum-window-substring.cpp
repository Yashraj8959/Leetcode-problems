class Solution {
public:
    string minWindow(string s, string t) {

       int hash[256] = {0};
       for(char c:t) hash[c]++;
       
       int l=0,r=0,count = t.size();
       int minlen = INT_MAX, start = 0;

       while(r < s.size()){
            if(hash[s[r]]>0) count--;
            hash[s[r]]--;
            r++;
            while(count == 0){
                if((r-l) < minlen){
                    minlen = r-l;
                    start = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count++;
                l++;
        }
       }
       return minlen == INT_MAX ? "" : s.substr(start,minlen);
    }
};