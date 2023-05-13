#Evens
Low = int(input("Enter the lower number: "))
High = int(input("Enter the higher number: "))
print(f"The even numbers between {Low} and {High} are: ",end="")
for i in range(Low,High):
    if i%2==0:
        print(f"{i} ",end="")
print('\n')

#Factors
Number = int(input("Enter a positive integer: "))
print(f"The integers that are factors of {Number} are: ",end="")
for i in range(1,Number+1):
    if Number%i == 0:
        print(f"{i} ",end="")
print('\n')

#GCD
x = int(input("X = "))
y = int(input("Y = "))
temp = max(x,y)
temp2 = min(x,y)
rremainder = temp % temp2
while rremainder:
    rremainder = temp % temp2
    temp = temp2
    if rremainder:
        temp2 = rremainder
print(f"GCD = {temp2}")