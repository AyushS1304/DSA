class CustomStack:
    
    def __init__(self, maxSize: int):
        self.stack=[]
        self.maxSize=maxSize
        self.currSize=0

    def push(self, x: int) -> None:
        if(len(self.stack)<self.maxSize):
            self.stack.append(x)
            self.currSize+=1

    def pop(self) -> int:
        if self.currSize==0:
            return -1
        else:
            self.currSize-=1
            return self.stack.pop()

    def increment(self, k: int, val: int) -> None:
        limit=min(k,len(self.stack))
        for i in range(limit):
            self.stack[i]+=val


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)