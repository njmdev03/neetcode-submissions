class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        init_ch = ord('a')
        helper = [0]*26
        for ch1 in s:
            helper[ord(ch1) - init_ch] += 1
        for ch2 in t:
            if helper[ord(ch2) - init_ch] == 0:
                return False
            helper[ord(ch2) - init_ch] -= 1
        
        return sum(helper) == 0
        