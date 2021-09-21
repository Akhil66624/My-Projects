import sqlite3 
conn = sqlite3.connect('journals.db')
c = conn.cursor()
c.execute('''ALTER TABLE journals ADD COLUMN loc text''')
c.execute('''ALTER TABLE journals ADD COLUMN aval real''')
print("added successfully")
c.execute("UPDATE journals set loc='Level-2,Science section',aval=20 where kind='Science'")
c.execute("UPDATE journals set loc='Level-2,Agriculture section',aval=15 where kind='Agriculture'")
c.execute("UPDATE journals set loc='Level-2,Politics section',aval=10 where kind='Politics'")
c.execute("UPDATE journals set loc='Level-2,Culture section',aval=20 where kind='Culture'")
print("Updated successfully")
conn.commit() 
# We can also close the connection if we are done with it.
 # Just be sure any changes have been committed or they will be lost.
conn.close()  
