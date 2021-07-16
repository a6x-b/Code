from tkinter import *
from time import sleep
from os import system
GUI = Tk()
def DaClick():
    for i in range(5):
        Warning = Label(GUI, text=f'{5-i}')
        Warning.pack()
        sleep(1)
    system('shutdown  /s /t 1')
DaBooton = Button(GUI, text='Click ME!',command=DaClick(),fg='Blue',bg='Yellow')
DaBooton.pack()
