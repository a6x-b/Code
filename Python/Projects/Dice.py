from random import randint
def DaMenu():
    print('Welcome to the world of the randomizer')
    print("Where's nothing constant here")
    print('Please choose from the menu')
    print('=========================')
    print('A. single dice throw')
    print('B. multiple dices throw')
    print('C. Amount of throws for a specific number (result)')
    print('=========================')
    Main_Menu = (str(input())).upper
    return Main_Menu
Main_Menu = DaMenu()
print(Main_Menu)
if Main_Menu == 'A':
    print('Please choose the amount of sides on the dice')
    print('4 Sides')
    print('6 Sides')
    print('8 Sides')
    print('10 Sides')
    print('12 Sides')
    print('20 Sides')
    result= randint(1,(int(input())+1) )
    print(f'Your luck is {result}')
elif Main_Menu == 'B':
    list_of_dices = []
    print('The number of dices is: ')
    for i in range(int(input())):
        print('Please choose the amount of sides on the dice')
        print('4 Sides')
        print('6 Sides')
        print('8 Sides')
        print('10 Sides')
        print('12 Sides')
        print('20 Sides')
        list_of_dices.append(int(input()))
elif Main_Menu == 'C':
    pass
else:
    print('Sorry, The input is not available')