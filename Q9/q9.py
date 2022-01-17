import random
class RandomizedSet:

    def __init__(self):
        self.new=[]

    def insert(self, val: int) -> bool:
        if val not in self.new:
            self.new.append(val)
            return True
        return False

    def remove(self, val: int) -> bool:
        if val in self.new:
            self.new.remove(val)
            return True
        return False

    def getRandom(self) -> int:
        return random.choice(self.new)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()