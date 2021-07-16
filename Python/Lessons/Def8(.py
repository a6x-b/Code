First = int(input('First Variable '))
Second = int(input('Second Variable: '))
def Function(a = First, b = Second):
    print(a -b)
    c = a -b
    return  c
    
def VarLen(a,*b):
    for i in b:
        a = a + i
    print(a)
    
Function(First, Second)
Function(b=Second, a = First)
VarLen(First,Second,15,48)
