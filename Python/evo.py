def oddsVsEvens(num):
    num = int(num)
    spaces = 0
    odds = 0
    evens = 0
    if num < 10:
        spaces = 1
    elif num >= 10 and num < 100:
        spaces = 2
    elif num >= 100 and num < 1000:
        spaces = 3
    for i in range(1, spaces+1):
        if num < 10:
            temp = num
        else:
            temp = num // (10*i)
        if num % 2 == 1:
            while temp > 10:
                num = num - 10
            odds = odds + temp
        else:
            while temp > 10:
                num = num - 10
            evens = evens + temp
    battle = evens - odds
    if battle > 0:
        print('even')
    elif battle < 0:
        print('odd')
    else:
        print('equal')
oddsVsEvens(input())