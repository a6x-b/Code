from unittest import case


#age = int(input())
def pool_admission(age):
    if (age < 2):
        return 0
    elif (age < 12):
        return 3
    elif (age <= 60):
        return 6
    else:
        return 4