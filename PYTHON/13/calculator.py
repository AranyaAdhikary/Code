"""

Data Entry Form 

Python Group Project 2023

@author : Sukanya Manna
		  Aranya Adhikary
		  Shounak Dey
		  Dipan Dutta
		  Koyena Chakraborti
		  
Synopsis : The following code produces a GUI for filling data of students.
		It gives four options : enter data, load data, search data and exit.
		
		Enter Data : It creates a form with 12 categories and checks for correct name, 
			phone number, contact number. It also check whether the user has accepted 
			the terms and conditions. The data is entered when the user clicks the 
			submit button.
			
		Load Data : It shows all the entries in an excel format.
		
		Search Data : It provides a drop down menu with 7 categories, an input area
			and search button. It also shows a message if no searched results are found. 
			
"""

from tkinter import *
import math

expression = ""

def press(num):
    global expression
    expression =expression +str(num)
    equation.set(expression)

def fact():
    global expression
    f=1
    for i in range(1,int(expression[:-1])+1):
        f=f*i
    expression = str(f)

def square():
    global expression
    exp = int(expression[:-1])**2
    expression = str(exp)

def inv():
    global expression
    exp = 1/int(expression[:-2])
    expression = str(exp)

def sqrt():
    global expression
    exp = int(expression[1:])**0.5
    expression = str(exp)

def log():
    global expression
    exp = expression[3:]
    expression = str(math.log10(int(exp)))

def ln():
    global expression
    exp = expression[2:]
    expression = str(math.log(int(exp)))

def equals():
    try:
        global expression
        if expression[-1]=='!':
            fact()
        elif expression[-1]=='\u00b2':
            square()
        elif expression[0]=='\u221a':
            sqrt()
        elif expression[-2:]=='\u207b\u00b9':
            inv()
        elif expression[:3]=='log':
            log()
        elif expression[:2]=='ln':
            ln()
        total = str(eval(expression))
        equation.set(total)
        expression = ""
    except:
        equation.set("Error")
        expression = ""

def delete():
    global expression
    expression = expression[:-1]
    equation.set(expression)

def clear():
    global expression
    expression = ""
    equation.set(expression)

if __name__ == "__main__":
    root = Tk()
    root.title('CALCULATOR') 
    root.configure(bg='#E6E6FA')   
    equation = StringVar(value='0')
    input = Entry(root, textvariable=equation,bd = 7,width=15,font=("Lucida Console",28), justify=RIGHT)
    input.grid(row=0, column=0, columnspan=5,pady=5,padx=4)
    
    btn_fact = Button(root, text="x!", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('!'))
    btn_fact.grid(row=1, column=0,pady=4)
    btn_sq = Button(root, text="x\u00b2", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('\u00b2'))
    btn_sq.grid(row=1, column=1,pady=4)
    btn_sqrt = Button(root, text="\u221ax", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('\u221a'))
    btn_sqrt.grid(row=1, column=2,pady=4)
    btn_inv = Button(root, text="x\u207b\u00b9", height=2, width=8,activebackground = '#FFCCCB',command = lambda: [press('\u207b\u00b9')])
    btn_inv.grid(row=1, column=3,pady=4)
    btn_ac = Button(root, text="AC", height=2, width=8,activebackground = '#FFCCCB',bg = '#ADD8E6',command = clear)
    btn_ac.grid(row=1, column=4,pady=4)
    btn_7 = Button(root, text="7", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(7))
    btn_7.grid(row=2, column=0,pady=4)
    btn_8 = Button(root, text="8", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(8))
    btn_8.grid(row=2, column=1,pady=4)
    btn_9 = Button(root, text="9", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(9))
    btn_9.grid(row=2, column=2,pady=4)
    btn_pow = Button(root, text="^", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('**'))
    btn_pow.grid(row=2, column=3,pady=4)
    btn_del = Button(root, text="DEL", height=2, width=8,activebackground = '#FFCCCB',command = delete)
    btn_del.grid(row=2, column=4,pady=4)
    btn_4 = Button(root, text="4", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(4))
    btn_4.grid(row=3, column=0,pady=4)
    btn_5 = Button(root, text="5", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(5))
    btn_5.grid(row=3, column=1,pady=4)
    btn_6 = Button(root, text="6", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(6))
    btn_6.grid(row=3, column=2,pady=4)
    btn_mult = Button(root, text="*", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('*'))
    btn_mult.grid(row=3, column=3,pady=4)
    btn_div = Button(root, text="/", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('/'))
    btn_div.grid(row=3, column=4,pady=4)
    btn_1 = Button(root, text="1", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(1))
    btn_1.grid(row=4, column=0,pady=4)
    btn_2 = Button(root, text="2", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(2))
    btn_2.grid(row=4, column=1,pady=4)
    btn_3 = Button(root, text="3", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(3))
    btn_3.grid(row=4, column=2,pady=4)
    btn_add = Button(root, text="+", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('+'))
    btn_add.grid(row=4, column=3,pady=4)
    btn_sub = Button(root, text="-", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('-'))
    btn_sub.grid(row=4, column=4,pady=4)
    btn_log = Button(root, text="log", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('log'))
    btn_log.grid(row=5, column=0,pady=4)
    btn_ln = Button(root, text="ln", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('ln'))
    btn_ln.grid(row=5, column=1,pady=4)
    btn_0 = Button(root, text="0", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(0))
    btn_0.grid(row=5, column=2,pady=4)
    btn_deci = Button(root,text = '.',height=2,width=8,activebackground='#FFCCCB',command = lambda: press('.'))
    btn_deci.grid(row=5,column=3,pady=4)
    btn_equals = Button(root, text="=", height=2, width=8,activebackground = '#FFCCCB',bg ='#ffb6c1',command = equals)
    btn_equals.grid(row=5, column=4,pady=4)

root.mainloop()