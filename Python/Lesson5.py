from math import sqrt, pow, pi, e, floor, ceil
Number = float(input('enter a float number (x.y)\n'))
Temp = Number
while int(Temp) > 0:
    Temp = Temp -1
    print(Temp)
if not(Temp < 0.0):
    if int(Temp*10) > 4:
        Number = ceil(Number)
    else:
        Number = floor(Number)
print(Number)
from time import sleep
sleep(3)