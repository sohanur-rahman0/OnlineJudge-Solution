from tkinter import *

root = Tk()
heading = Label(root,text = "Welcome to GUI Programming").pack()
def Click():
    clickLabel = Label(root, text = "Button Clicked")
    clickLabel.pack()
    
myButton = Button(root,text = "Click Me!",fg = "white",bg = "black",command = Click, padx = 10, pady = 10)

myButton.pack()

root.mainloop()
