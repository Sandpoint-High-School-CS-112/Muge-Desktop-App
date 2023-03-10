import subprocess
from tkinter import *

txt = open("selected.txt", "w+")

root = Tk()

def back():
    subprocess.Popen("main.cmd")
    root.destroy()

def setcat():
    txt.truncate(0)
    txt.write("cat.png")
def setdog():
    txt.truncate(0)
    txt.write("dog.png")
def setbird():
    txt.truncate(0)
    txt.write("bird.png")
def setgiraffe():
    txt.truncate(0)
    txt.write("giraffe.png")
def setfish():
    txt.truncate(0)
    txt.write("fish.png")
def setbunny():
    txt.truncate(0)
    txt.write("bunny.png")
def sethedgehog():
    txt.truncate(0)
    txt.write("hedgehog.png")
def setkoala():
    txt.truncate(0)
    txt.write("koala.png")
def setmonkey():
    txt.truncate(0)
    txt.write("monkey.png")
def setoctopus():
    txt.truncate(0)
    txt.write("octopus.png")
def setparrot():
    txt.truncate(0)
    txt.write("parrot.png")
def setpeacock():
    txt.truncate(0)
    txt.write("peacock.png")
def setpenguin():
    txt.truncate(0)
    txt.write("penguin.png")
def setsnake():
    txt.truncate(0)
    txt.write("snake.png")
def setwalrus():
    txt.truncate(0)
    txt.write("walrus.png")

def petbtns():

    btn = Button(text="Back", command=back)
    cat = Button(text="Cat", command=setcat)
    dog = Button(text="Dog", command=setdog)
    bird = Button(text="Bird", command=setbird)
    giraffe = Button(text="Giraffe", command=setgiraffe)
    fish = Button(text="Fish", command=setfish)
    bunny = Button(text="Bunny", command=setbunny)
    hedgehog = Button(text="Hedgehog", command=sethedgehog)
    koala = Button(text="Koala", command=setkoala)
    monkey = Button(text="Monkey", command=setmonkey)
    octopus = Button(text="Octopus", command=setoctopus)
    parrot = Button(text="Parrot", command=setparrot)
    peacock = Button(text="Peacock", command=setpeacock)
    penguin = Button(text="Penguin", command=setpenguin)
    snake = Button(text="Snake", command=setsnake)
    walrus = Button(text="Walrus", command=setwalrus)

    dog.pack()
    cat.pack()
    bird.pack()
    giraffe.pack()
    fish.pack()
    bunny.pack()
    hedgehog.pack()
    koala.pack()
    monkey.pack()
    octopus.pack()
    parrot.pack()
    peacock.pack()
    penguin.pack()
    snake.pack()
    walrus.pack()
    btn.place(x=5, y=2)

petbtns()



root.title("Daily Tasks")
root.geometry("320x502")
root.mainloop()