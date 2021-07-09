
from time import sleep as Wait

Usernames =[]
pwd = []
Names = []
Ages = []
class Account:
    def __init__(self, User, name, age, Password):
        self.User = str(User)
        self.Name = str(name)
        self.Age = int(age)
        self.Pwd = str(Password)
if input('Method Pls: ') == 'New':
    
    Sign_Username = input('Username: ')
    Sign_Password= input('Password: ')
    Sign_Name = input('Name: ')
    Sign_Age = input('Age: ')
    if Sign_Username not in Usernames:
        print('You\'re Signed up Successfully!')
        user = Account(Sign_Username, Sign_Name, Sign_Age, Sign_Password)
        
elif input() == 'Login':
    logged = False
    while not logged:
        login_username = input('Please enter your username: ')
        login_password = input('Please enter your password: ')
        if login_username in Usernames:
            
            user =
#add append to sign up and make a loop and complete the if statment
Wait(2)

