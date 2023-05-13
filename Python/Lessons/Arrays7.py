from array import array
Numberarray = array('i',[])
Values = int(input('How Many Numbers do you want to add? '))

for i in range(Values):
    Numberarray.append(int(input('Please Enter NUmber: ')))
    print(Numberarray) #for debugging
Search = int(input("I'm Looking for the index of the NUmber "))
Theindex = 0
for j in Numberarray:
    if j  == Search:
        print(f"THe index of the number {Search} is {Theindex}")
        break
    else:
        Theindex+=1
if Search not in Numberarray:
    print("The number you're searching for is not in the array")