class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(int i = 0; i < J.length();i++){
            int index = S.find(J[i]); 
            while(index >= 0){
                count++;
                S.erase(index,1);
                index = S.find(J[i]);
            }
        }
        return count;
    }
};
