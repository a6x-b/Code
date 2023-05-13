Usernames =[]
Passwords = []
Names = []
Ages = []
def SignUp(Sign_Username, Sign_Password, Sign_Name, Sign_Age,user):
    if Sign_Username not in Usernames:
        print('You\'ve Signed up Successfully!')
        Usernames.append(Sign_Username)
        Passwords.append(Sign_Password)
        Names.append(Sign_Name)
        Ages.append(Sign_Age)
        user = Account(Sign_Username, Sign_Name, Sign_Age, Sign_Password)
        return user

logged = False
from time import sleep as Wait
while True:
    class Account:
        def __init__(self, User, name, age, Password):
            self.User = str(User)
            self.Name = str(name)
            self.Age = int(age)
            self.Pwd = str(Password)
    Menu = input('Method Please: ')
    #user = Account('', '', 0, '')    
    if Menu == 'New':
        Sign_Username = input('Username: ')
        Sign_Password= input('Password: ')
        Sign_Name = input('Name: ')
        Sign_Age = int(input('Age: '))
        #user = Account('', '', 0, '')    
        if Sign_Username not in Usernames:
                print('You\'ve Signed up Successfully!')
                Usernames.append(Sign_Username)
                Passwords.append(Sign_Password)
                Names.append(Sign_Name)
                Ages.append(Sign_Age)
                user = Account(Sign_Username, Sign_Name, Sign_Age, Sign_Password)
        logged = True
    elif Menu == 'Login':
        while not logged:
            login_username = str(input('Please enter your username: '))
            login_password = str(input('Please enter your password: '))
            if login_username in Usernames:
                i = 0
                while login_username != Usernames[i]:
                    i = i+1
                else:
                    user = Account(login_username, Names[i], Ages[i], Passwords[i])
                    logged = True
            else:
                print('Sorry, but Username or password is not correct.')
        else:
            print(f"You're already Logged in with {user.User}")
    elif Menu == 'Exit':
        break
#i just need to store the data somewhere else so it don't get reset
Wait(2)

