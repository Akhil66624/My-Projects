import sqlite3 
conn = sqlite3.connect('academics.db')
b = conn.cursor()
b.execute('''ALTER TABLE academics ADD COLUMN loc text''')
b.execute('''ALTER TABLE academics ADD COLUMN aval real''')
print("added successfully")
b.execute("UPDATE academics set loc='Level-3,CSE section',aval=60 where dep='CSE'")
b.execute("UPDATE academics set loc='Level-3,ECE section',aval=50 where dep='ECE'")
b.execute("UPDATE academics set loc='Level-4,EEE section',aval=45 where dep='EEE'")
b.execute("UPDATE academics set loc='Level-4,Mechanical Engineering section',aval=45 where dep='MECH'")
print("Updated successfully")
conn.commit() 
# We can also close the connection if we are done with it.
 # Just be sure any changes have been committed or they will be lost.
conn.close()  
