from tkinter import *
from time import sleep
from os import system
GUI = Tk()
def DaClick():
    for i in range(5):
        Warning = Label(GUI, text=f'{5-i}')
        Warning.pack()
        sleep(1)
    
DaBooton = Button(GUI, text='Click ME!',fg='Blue',bg='Yellow',command=DaClick())
DaBooton.pack()

GUI.mainloop()
