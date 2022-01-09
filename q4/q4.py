class Solution:
    def isValid(self, s: str) -> bool:
        new =[]
        check = {']':'[','}':'{',')':'('}
        for char in s:
            if char in check.values():
                new.append(char)
            elif char in check.keys():
                if new==[] or new.pop()!=check[char]:
                    return False
        return new==[]