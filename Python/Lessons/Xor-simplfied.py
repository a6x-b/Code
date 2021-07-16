print('The binary of 25 is '+ str(bin(25)))
print('The binary of 36 is '+ str(bin(36)))
a = 25
b = 36
a = a ^ b
b = a ^ b
a = a ^ b
input()
print(a, b)


#a (25) is 000011001
#b (36) is 000100100
#a = 000111101
#b = 000011001
#a = 000100100


#Calculation for b value
#000100100
#000111101