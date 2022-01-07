

class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        first = 0
        last = len(s)
        new = []
        for i in s:
            if i=='D':
                new.append(last)
                last-=1
            else:
                new.append(first)
                first+=1
                
        new.append(first)
        return new