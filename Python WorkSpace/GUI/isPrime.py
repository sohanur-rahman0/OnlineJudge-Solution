from tkinter import *

root = Tk()
heading = Label(root,text = "Enter a number:")
e = Entry(root,width = 20,bg = "white", fg = "blue",borderwidth = 2)


def Click():
    n = int(e.get())
    flag = isPrime(n)
    if flag==True:
        PclickLabel = Label(root, text="Prime")
        PclickLabel.grid(row=2,column = 0)
    else:
       Np = Label(root,text = "Not Prime")
       Np.grid(row=2,column = 0)
    

def isPrime(n):
    n = abs(int(n))
    if n<2:
        return False
    if n&1:
        return False
    else :
        for i in range (3,int(n**0.5)+1,2):
            if n%i==0:
                return False
            return True

heading.grid(row=0,column = 0)        
e.grid(row=1,column = 0, padx = 20)        
myButton = Button(root,text = "Submit",fg = "white",bg = "black",command = Click, padx = 10, pady = 5)

myButton.grid(row = 3,column = 0)

root.mainloop()
