import sqlite3 
conn = sqlite3.connect('journals.db')
c = conn.cursor()
# Create table 
c.execute('''CREATE TABLE journals (bookname text, author text,kind text)''')
 # Insert a row of data
c.execute('''INSERT INTO journals VALUES ('Early Man Science','George','Science')''')
c.execute('''INSERT INTO journals VALUES ('The Black Hole','Hamilton','Science')''')
c.execute('''INSERT INTO journals VALUES ('Farmers Best Friend','Leonardo','Agriculture')''')
c.execute('''INSERT INTO journals VALUES ('The Political Issues','Ibrahim','Politics')''')
c.execute('''INSERT INTO journals VALUES ('The Food Science','Albert','Culture')''')
c.execute('''INSERT INTO journals VALUES ('Italian Cooking','Jhon','Culture')''')
c.execute('''INSERT INTO journals VALUES ('The Indian Festivals','Sresh Babu','Culture')''')
c.execute('''INSERT INTO journals VALUES ('The Beautiful Space','Vicky James','Science')''')
c.execute('''INSERT INTO journals VALUES ('Super Surgeon','Robert','Science')''')
c.execute('''INSERT INTO journals VALUES ('Modern Methods in farming','Rambabu','Agriculture')''')
c.execute('''INSERT INTO journals VALUES ('Best Practices in Farming','Shukla Jain','Agriculture')''')
c.execute('''INSERT INTO journals VALUES ('The Best Farmer','Chandrashekar Iyer','Agriculture')''')
c.execute('''INSERT INTO journals VALUES ('Latest Trends in Automobile Engineering','Madhukar','Science')''')
c.execute('''INSERT INTO journals VALUES ('The Great Soil','Ram','Agriculture')''')
c.execute('''INSERT INTO journals VALUES ('Pochampally Weaving','K.Kavitha','Culture')''')
c.execute('''INSERT INTO journals VALUES ('Mesmerizing Indian Music','Jhon','Culture')''')
c.execute('''INSERT INTO journals VALUES ('The Perfect Politician','Annamacharya','Politics')''')
c.execute('''INSERT INTO journals VALUES ('What People Expects from Politicians','Subhramanyam Iyer','Politics')''')
c.execute('''INSERT INTO journals VALUES ('How Politics Effect Nation','George Wisely','Politics')''')
# Save (commit) the changes 
conn.commit() 
# We can also close the connection if we are done with it.
 # Just be sure any changes have been committed or they will be lost.
conn.close()  

