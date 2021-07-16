from tkinter import *
from time import sleep
from os import system
GUI = Tk()
def DaClick():
    for i in range(5,0,-1):
        Warning = Label(GUI, text=f'{i}')
        Warning.pack()
    system('shutdown -s')
DaBooton = Button(GUI, text='Click ME!',command=DaClick(),fg='Blue',bg='Yellow')
DaBooton.pack()
