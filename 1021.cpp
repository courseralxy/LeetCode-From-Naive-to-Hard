class Solution {
public:
    string removeOuterParentheses(string S) {
        int tmp = 0;
        int begin = 0;
        string res = "";
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '(')
                tmp++;
            else
                tmp--;
            if(tmp == 0){
                res += S.substr(begin + 1, i  - begin - 1);
                begin = i + 1;
            }
        }
        return res;
    }
};
