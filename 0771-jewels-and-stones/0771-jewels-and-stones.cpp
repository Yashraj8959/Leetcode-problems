class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sn = stones.size();
        int jn = jewels.size();
        set<char> sets;
        int count = 0;
        for(auto i: jewels){
            sets.insert(i);
        }
        for(int i=0; i<sn; i++){
            if(sets.contains(stones[i])){
                count++;
            }
        }
        return count;
    }
};