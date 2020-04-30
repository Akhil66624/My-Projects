#Creating GUI with tkinter
import tkinter
from tkinter import *
import sqlite3
class Gui:
    def send(self,x,z):
        msg =x.get('1.0',END).strip()
        x.delete('0.0',END)
        if msg != '':
            z.config(state=NORMAL)
            z.insert(END, "You: " + msg + '\n\n')
            z.config(foreground='#442265', font=("Verdana", 12 ))
            z.config(state=DISABLED)
            z.yview(END)
            msg=msg.upper()
            m1.response(msg)  
    def show(self,txt,z):
        z.config(state=NORMAL)
        z.insert(END, "Bot: " + txt + '\n\n')
        z.config(foreground="#442265", font=("Verdana", 12 ))
        z.config(state=DISABLED)
        z.yview(END)
class Manager:
    books_issued=0
    problem=''
    def response(self,a): 
        if a=='MENU':
            g1.show("Welcome to lovely\nWhat would you like to read?\n1.Journals\n2.Academic Books\n",ChatLog)
        elif a=='JOURNALS':
            g1.show("OK Fine,Which kind of Journals would you like to read\n1.Science\n2.Agriculture\n3.Politics\n4.Culture",ChatLog)
        elif a=='SCIENCE':
            g1.show("Here are your Science Journals followed by Author name,Location & Availability",ChatLog)
            d1.display("bookname","author","loc","aval","journals","Kind='Science'","journals.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)
        elif a=='AGRICULTURE':
            g1.show("Here are your Agriculture Journals followed by Author name,Location & Availability",ChatLog)
            d1.display("bookname","author","loc","aval","journals","Kind='Agriculture'","journals.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)
        elif a=='POLITICS':
            g1.show("Here are your Politics Journals followed by Author name,Location & Availability",ChatLog)
            d1.display("bookname","author","loc","aval","journals","Kind='Politics'","journals.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)
        elif a=='CULTURE':
            g1.show("Here are your Culture Journals followed by Author name,Location & Availability",ChatLog)
            d1.display("bookname","author","loc","aval","journals","Kind='Culture'","journals.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)
        elif a=='FINISH':
            g1.show("ThankYou, I hope you had have a nice experience",ChatLog)
            EntryBox.config(state=DISABLED)
        elif a=='ACADEMIC BOOKS':
            g1.show("OK Fine,What would you like to do now\n1.Issue Books\n2.Return Books\n3.Search",ChatLog)
        elif a=='ISSUE BOOKS':
            m1.issue_books()
        elif a=='RETURN BOOKS':
            m1.return_books()
        elif a=='SEARCH':
             g1.show("Enter Department Name\n1.CSE\n2.ECE\n3.EEE\n4.MECH",ChatLog)
        elif a=='CSE':
            g1.show("Here are your CSE Books followed by Author name,Location & Availability",ChatLog)
            d1.display("book_name","author_n","loc","aval","academics","dep='CSE'","academics.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)
        elif a=='ECE':
            g1.show("Here are your ECE Books followed by Author name,Location & Availability",ChatLog)
            d1.display("book_name","author_n","loc","aval","academics","dep='ECE'","academics.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)    
        elif a=='EEE':
            g1.show("Here are your EEE Books followed by Author name,Location & Availability",ChatLog)
            d1.display("book_name","author_n","loc","aval","academics","dep='EEE'","academics.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)  
        elif a=='MECH':
            g1.show("Here are your MECH Books followed by Author name,Location & Availability",ChatLog)
            d1.display("book_name","author_n","loc","aval","academics","dep='MECH'","academics.db")
            g1.show("What would you like to do now\n1.Menu\n2.Finish",ChatLog)    
        else:
            g1.show("Sorry! Please enter the valid Choice",ChatLog)
    def issue_books(self):
        if m1.books_issued>=0 and m1.books_issued<5:
            bks=0
            bks=(5-m1.books_issued)
            g1.show("You are allowed to Issue "+str(bks)+" books\n\nNow,What would you like to do\n1.Menu\n2.Finish",ChatLog)
        else:
            g1.show("Sorry! Your Limit is exceeded\nPlease Return any of the Books\n\nNow,What would you like to do\n1.Menu\n2.Finish",ChatLog)
    def return_books(self):        
        if m1.books_issued==0:
            g1.show("You don't have any books to Return\n\nNow,What would you like to do\n1.Menu\n2.Finish",ChatLog)
        else:
            g1.show("You are allowed to Return "+str(m1.books_issued)+" books\n\nNow,What would you like to do\n1.Menu\n2.Finish",ChatLog)
    
        
            
         
            
class Database:
    def display(self,b_name,a_name,loc,aval,table,typ,db):
        string="SELECT "+b_name+","+a_name+","+loc+","+aval+" FROM "+table+" WHERE "+typ
        conn = sqlite3.connect(db)
        c = conn.cursor()
        c.execute(string)
        data=c.fetchall()
        for row in data:
            g1.show("  "+row[0]+" - "+row[1]+"-"+row[2]+"-"+str(row[3]),ChatLog)
        conn.close() 
        

            
g1=Gui()  
m1=Manager()  
d1=Database()            
base = Tk()       
base.title("Welcome to Central Library") 
base.geometry("600x700")
base.resizable(width=FALSE, height=FALSE)
#Create Chat window
ChatLog = Text(base, bd=0, bg="white", height=16, width=100, font="Arial",wrap='word')
ChatLog.config(state=DISABLED)
#Bind scrollbar to Chat window
scrollbar = Scrollbar(base, command=ChatLog.yview, cursor="heart")
ChatLog['yscrollcommand'] = scrollbar.set
m1.response('MENU')  

#Create the box to enter message
EntryBox = Text(base, bd=0, bg="white",width=58, height=10, font="Arial")
#Create Button to send message
SendButton = Button(base, font=("Verdana",12,'bold'), text="Send", width=14, height=10,
                  bd=0, bg="#32de97", activebackground="#3c9d9b",fg='#ffffff',
                     command=lambda:[g1.send(EntryBox,ChatLog)])
#var=EntryBox.get('1.0','end-1c')


#EntryBox.bind("<Return>", send)
#Place all components on the screen
scrollbar.place(x=580,y=6, height=590)
ChatLog.place(x=6,y=6, height=590, width=570)

EntryBox.place(x=165, y=605, height=90, width=425)
SendButton.place(x=6, y=605, height=90)


    
base.mainloop()
