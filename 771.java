class Solution {
    public int numJewelsInStones(String J, String S) {
        int count = 0;
        for(int i = 0; i < J.length(); i++){
            int index = S.indexOf(J.charAt(i));
            while(index >= 0){
                count++;
                index = S.indexOf(J.charAt(i),index + 1);
            }
        }
        return count;
    }
}
