import subprocess
from tkinter import *

root = Tk()

def DailyTasks():
  subprocess.Popen("DailyTasks.cmd")

def About():
  subprocess.Popen("About.cmd")

def Pets():
  subprocess.Popen("pets.cmd")

bg = PhotoImage(file = "mudge backgorund.png")

label1 = Label( root, image = bg)
label1.place(x = 0, y = 0)

tasksbtn = Button(text="DailyTasks", command=DailyTasks)
aboutbtn = Button(text="About", command=About)
petbtn = Button(text="Pets", command=Pets)

petbtn.place(x=75, y=4)
tasksbtn.place(x=5, y=4)
aboutbtn.place(x=5, y=35)


root.geometry("320x502")
root.title("Mudge")
root.mainloop()