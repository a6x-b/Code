from time import sleep
from math import sqrt, pow, pi, e, floor, ceil
from sys import argv

def Function(Number):
    oldnum= Number
    Temp = Number
    while int(Temp) > 0:
        Temp = Temp -1
    if not(Temp < 0.0):
        if int(Temp*10) > 4:
            Number = ceil(Number)
            print(str(oldnum)+'is ceilled to '+str(Number))
        else:
            Number = floor(Number)
            print(str(oldnum)+'is flooered to '+str(Number))
    return Number

if argv[1] == 'Maunal':
    Number = float(input('enter a float number (x.y)\n'))
    Function(Number)
elif type(float(argv[1])) == type(0.8):
    Number = float(argv[1])
    Function(Number)
    Number = argv[1]
sleep(3)