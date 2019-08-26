class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] letter = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> morseSet = new HashSet<String>();
        for(String word: words){
            StringBuilder morse = new StringBuilder();
            for(char ch: word.toCharArray())
                morse.append(letter[ch - 'a']);
            morseSet.add(morse.toString());
        }
        return morseSet.size();
    }
}

// note that char ch: word.toCharArray() is faster than int i = 0; i < word.length(); i++
// and StringBuilder.append is faster than String + String
