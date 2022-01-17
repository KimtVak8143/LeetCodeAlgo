class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) < 3:
            return False
        new = []
        for char in s:
            new.append(char)
            if len(new) >= 3:
                # if(new[-1::-3]=='cba'):
                if (new[-1] == 'c' and new[-2] == 'b' and new[-3] == 'a'):
                    new.pop()
                    new.pop()
                    new.pop()

        return new == []


# sample 24 ms submission
# class Solution:
#     def isValid(self, S):
#         S2 = ""
#         while S != S2:
#             S, S2 = S.replace("abc", ""), S
#         return S == ""