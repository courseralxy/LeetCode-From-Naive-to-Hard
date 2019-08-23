class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        res = ""
        tmp = 0
        flag = False
        for ch in S:
            if '(' == ch:
                tmp += 1
            else:
                tmp -= 1
            
            if 0 != tmp:
                if True == flag:
                    res += ch
                else:
                    flag = True
            else:
                flag = False
        return res
