class Solution {
    public String removeOuterParentheses(String S) {
        StringBuilder res = new StringBuilder();
        int tmp = 0;
        int begin = 0;
        for(int i = 0; i < S.length(); i++){
            
            char c = S.charAt(i);
            
            if('(' == c)
                tmp++;
            else
                tmp--;
            if(0 == tmp){
                res.append(S.substring(begin + 1, i));
                begin = i + 1;
            }
        }
        return res.toString();
    }
}
