from tkinter import *
from random import choice

root = Tk()

listchoice = ["Help someone in need.",
                  "Say hello to someone today.",
                  "Offer to help someone.",
                  "Compliment someone.",
                  "Donate to an organization that helps people in need.",
                  "Make a positive or encouraging note and give it to a stranger.",
                  "Tell someone about your hobbies.",
                  "Talk about your favorite pastime.",
                  "Practice a hobby.",
                  "Write about a hobby.",
                  "Try out a new hobby that interests you.",
                  "Draw or sketch your favorite hobby.",
                  "Teach someone your favorite hobby.",
                  "Write down three things that you are thankful for.",
                  "Talk to your friends",
                  "Help a friend.",
                  "Tell a friend about something that's troubling you.",
                  "Let a friend talk about something that's troubling them.",
                  "Hang out with your friends.",
                  "Tell a friend what they mean to you.",
                  "Ask a friend for a couple of things that you never knew about them.",
                  "Give a loved one a hug.",
                  "Make a thank-you card for a loved one.",
                  "Tell a loved one about something that's troubling you.",
                  "Help a loved one.",
                  "Do something with a loved one.",
                  "Tell a loved one what they mean to you.",
                  "Tell a mentor how thankful you are for them.",
                  "Thank a mentor for everything they have done to guide you.",
                  "Tell or write to someone about the qualities that made your mentor deserving of that status.",
                  "Tell or write to your mentor about what qualities about them made them deserving of that status.",
                  "Make a thank-you card for a mentor.",
                  "Think of, then tell one of your mentors and three things that you appreciate about them.",
                  "Take a walk.",
                  "Do 5 jumping jacks.",
                  "Do 5 sit ups.",
                  "Jog in place.",
                  "Take a small rest and relax.",
                  "Draw or sketch your favorite physical activity.",
                  "Try out a sport that you’ve never done before.",
                  "Take a deep breath.",
                  "Think about a loved one.",
                  "Take a quick break when possible.",
                  "Talk about something that’s troubling you.",
                  "Tell someone about your day.",
                  "Let someone tell you about their day.",
                  "Make a drawing, or sketch something.",
                  "Try out the grateful challenge. (For more information look in the about page.)"
]

scorelbl = Label(text="")
scorelbl.place(x=0, y=130)

def addscore():
    with open('c1.txt', 'r+') as c1:
        a = c1.read()

    if a == 'a':
        try:
            with open("score.txt", 'r+') as scoredoc:
                score = int(scoredoc.read())
                score += 1
                scoredoc.seek(0)
                scoredoc.write(str(score))
                scoredoc.truncate()
                scorelbl.config(text=str(score))
        except FileNotFoundError:
            print("File not found.")
        except ValueError:
            print("Invalid score value in file.")
        except Exception as e:
            print(f"Error: {e}")

        c1.truncate(0)
        c1.write('b')
        label2.config(text="Completed!")




def addscore1():
    with open('c2.txt', 'r+') as c2:
        a = c2.read()

    if a == 'a':
        try:
            with open("score.txt", 'r+') as scoredoc:
                score = int(scoredoc.read())
                score += 1
                scoredoc.seek(0)
                scoredoc.write(str(score))
                scoredoc.truncate()
                scorelbl.config(text=str(score))
        except FileNotFoundError:
            print("File not found.")
        except ValueError:
            print("Invalid score value in file.")
        except Exception as e:
            print(f"Error: {e}")

        c2.truncate(0)
        c2.write('b')
        label2.config(text="Completed!")



def addscore2():
    with open('c1.txt', 'r+') as c3:
        a = c3.read()

    if a == 'a':
        try:
            with open("score.txt", 'r+') as scoredoc:
                score = int(scoredoc.read())
                score += 1
                scoredoc.seek(0)
                scoredoc.write(str(score))
                scoredoc.truncate()
                scorelbl.config(text=str(score))
        except FileNotFoundError:
            print("File not found.")
        except ValueError:
            print("Invalid score value in file.")
        except Exception as e:
            print(f"Error: {e}")

        c3.truncate(0)
        c3.write('b')
        label2.config(text="Completed!")



  
label1 = Button(text="", command=addscore)
label1.place(x=0, y = 40)

label2 = Button(text="", command=addscore1)
label2.place(x=0, y = 70)

label3 = Button(text="", command=addscore2)
label3.place(x=0, y = 100)

def rand():
  t1 = choice(listchoice)
  t2 = choice(listchoice)
  t3 = choice(listchoice)

  if t1 == t2:
    t1 = choice(listchoice)

  if t2 == t3:
    t2 = choice(listchoice)

  if t3 == t1:
    t3 = choice(listchoice)
  
  label1.config(text=t1)
  label2.config(text=t2)
  label3.config(text=t3)

  with open('c1.txt', 'r+') as c1:
    c1.write('a')

  with open('c2.txt', 'r+') as c2:
    c1.write('a')
    
  with open('c3.txt', 'r+') as c3:
    c1.write('a')

randbtn = Button(text="Randomize!", command=rand)
randbtn.place(x=320/2, y=0)

root.title("Daily Tasks")
root.geometry("320x502")
root.mainloop()