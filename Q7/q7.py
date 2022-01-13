class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        new={}
        for i in strs:
            check = tuple(sorted(i))
            new[check]=new.get(check,[])+[i]
        return new.values()


# class Solution:
#     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
#         groups = defaultdict(list)
#         for s in strs:
#             key = "".join(sorted(s))
#             groups[key].append(s)
#         return groups.values()
