from time import sleep
print("#####  Operators   ######")

print("####  Logical  ####")
Variable1 = True
Variable2 = False
print(Variable1 and Variable2)
print(Variable1 or Variable2)
print(Variable1 != Variable2 )
print(Variable1 == Variable2)
print(not Variable1)

print("####  Unary  ####")
Variable1 = 5
Variable1 = -Variable1
print(Variable1)

Variable1 = -Variable1 * 2
print(Variable1)

print("####  Relational  ####")

Variable2 = 4
print(Variable1 < Variable2)
print(Variable1 > Variable2)
print(Variable1 <= Variable2)
print(Variable1 >= Variable2)
print(Variable1 == Variable2)
print(Variable1 != Variable2)

Number = int(input("Any decimal pls\n"))
print('The Binary value of '+ str(Number) +' is '+bin(Number)+'.')
print('The Octal value of '+ str(Number) +' is '+oct(Number)+'.')
print('The HexaDecimal value of '+ str(Number) +' is '+hex(Number)+'.')