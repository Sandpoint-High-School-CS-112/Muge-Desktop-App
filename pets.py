from tkinter import *
import subprocess
from PIL import Image, ImageTk

root = Tk()

def SelectPet():
    subprocess.Popen("PetSelect.cmd")

petselect = Button(text="Pet Select", command=SelectPet)
petselect.place(x=0,y=0)

with open("selected.txt", "r") as f:
    simgb = f.read().strip()

img = Image.open(simgb)

bg = ImageTk.PhotoImage(img)

label1 = Label(root, image = bg)
label1.place(x = 0, y = 20)

root.title("Pets")
root.geometry("320x502")
root.mainloop()