from tkinter import *

root = Tk()
heading = Label(root,text = "Enter Your Name:").pack()
e = Entry(root,width = 20,bg = "white", fg = "blue",borderwidth = 2)
e.pack()
e.insert(0,"Default Name")
def Click():
    greeting  = "Welcome " + e.get()
    clickLabel = Label(root, text=greeting)
    clickLabel.pack()


myButton = Button(root,text = "Submit",fg = "white",bg = "black",command = Click, padx = 10, pady = 5)

myButton.pack()

root.mainloop()
