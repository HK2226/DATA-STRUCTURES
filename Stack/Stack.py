# Deque (Double ended ques)
# It takes a time complexity of O(1) for push and pop operation

from collections import deque
class Stack:
    def __init__(self):
        self.stack = deque() # initialize the deque
    def pushElement(self,ele):
        self.stack.append(ele) # Append the element in the stack
    def popElement(self):
        self.stack.pop()
    def peekStack(self):
        return self.stack[-1]
    def stackLength(self):
        return len(self.stack)


# make an object for the stack

obj_stack = Stack()

#type your operations

obj_stack.pushElement(5) 
# adds 5 to the stack

obj_stack.pushElement(7) 
# adds 7 to the stack

obj_stack.pushElement(2) 
# adds 2 to the stack

print(obj_stack.peekStack()) 
# returns the last element(2)

obj_stack.popElement() 
# deletes the last added element(2)

print(obj_stack.peekStack()) 
# returns the last element(7)

print(obj_stack.stackLength()) 
# returns the length of the current stack(2)