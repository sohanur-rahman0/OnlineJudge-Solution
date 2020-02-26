from tkinter import *

root = Tk()

myLabel = Label(root,text = "Hello World")
NameLabel = Label(root, text = "My name is Barry Allen")

myLabel.grid(row = 0, column = 0)
NameLabel.grid(row = 1, column = 0)

root.mainloop()
