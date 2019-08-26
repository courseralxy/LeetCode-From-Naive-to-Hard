class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        letter = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morseSet = { "".join(letter[ord(ch) - ord('a')] for ch in word) for word in words}
        return len(morseSet)
// How short the code is!
