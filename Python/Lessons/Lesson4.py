#Heeeeeeeeeeeeeeeeeeeeeeeeelp!!!!!!!!!111!!!
ItemsMenu = {'Operators': False, 'Converting System': False, 'Vars swap': False, }
print(ItemsMenu['Operators'])
Keys = ['Operators', 'Converting System', 'Vars swap']
Values = [False, False, False]
for i in range(0, len(ItemsMenu)):
    print('Do you want to run '+Keys[i]+' Program?')
    print('Answer with Yes | No.')
    if input() == 'Yes':
        Values[i] = True
ItemsMenu = zip(Keys, Values)


    
    
    
if ItemsMenu['Operators'] == True:
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
if ItemsMenu['Converting System'] == True:
    print('#####  Number converting system  #####')

    Number = int(input("Any decimal pls\n"))
    print('The Binary value of '+ str(Number) +' is '+bin(Number)+'.')
    print('The Octal value of '+ str(Number) +' is '+oct(Number)+'.')
    print('The HexaDecimal value of '+ str(Number) +' is '+hex(Number)+'.')
if ItemsMenu['Vars swap'] == True:
    print('#####  Swap two Vars  #####')

    Variable1 = input('Enter var1 : ')
    Variable2 = input('Enter var2 : ')
    Method = int(input("Choose a method 1-3\n"))
    if Method == 1:
        print('####  Method1  ####')
        Variable1 = Variable1 + Variable2 # 23 + 15 = 38
        Variable2 = Variable1 - Variable2 # 38 - 15 = 23
        Variable1 = Variable1 - Variable2 # 38 - 23 = 15
    if Method == 2:
        print('####  Method2  ####')

        Temporary = Variable1
        Variable1 = Variable2
        Variable2 = Temporary
    
    if Method == 3:
        print('####  Method3  ####')
        Variable1 = Variable1 ^ Variable2
        Variable2 = Variable1 ^ Variable2
        Variable1 = Variable1 ^ Variable2
    print(Variable1)
    print(Variable2)