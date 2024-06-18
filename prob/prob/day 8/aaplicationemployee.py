import sqlite3 

def list_all():
    con = sqlite3.connect("employee_db.b.db")
    cur = con.cursor()
    sql = "SELECT * FROM employee"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchall()
    print(employee)

def create_employee():
    code = input('code:')
    name = input('name:')
    job_title = input('job_title:')
    salary = input('salary:')
    con = sqlite3.connect("employee_db.b.db")
    cur = con.cursor()
    #sql = '''INSERT INTO employee(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    sql = f'''INSERT INTO employee(code, name, job_title, salary)
VALUES('{code}','{name}','{job_title}','{salary}')'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('employee is created successfully.')

def edit_employee():
    id = int(input('enter employee id:'))
    con = sqlite3.connect("employee_db.b.db")
    cur = con.cursor()
    sql = f"SELECT * FROM employee WHERE id={id}"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchone()
    
    code = input(f'code({employee[1]}):')
    name = input(f'name({employee[2]}):')
    job_title = input(f'job_title({employee[3]}):')
    salary = input(f'salary({employee[4]}):')
    #sql = '''INSERT INTO employee(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    sql = f'''UPDATE employee
SET code='{code}',
    name='{name}',
    job_title='{job_title}',
    salary='{salary}'
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('employee is updated successfully.')
    
def delete_employee():
    id = int(input('enter employee id:'))
    con = sqlite3.connect("employee_db.b.db")
    cur = con.cursor()
    sql = f"SELECT * FROM employee WHERE id={id}"
    sqlResult  = cur.execute(sql)
    employee = sqlResult.fetchone()
    
    print(f'first name:{employee[1]}:')
    #print(f'last name:{employee[2]}')
    #sql = '''INSERT INTO employee(first_name, last_name)
#VALUES('%s','%s')'''%(first_name,last_name)
    confirm = input('Are you sure to delete(y/n)?')
    if confirm != 'y':
        return
    sql = f'''DELETE FROM employee
WHERE id={id}'''
    sqlResult  = cur.execute(sql)
    con.commit()
    print('employee is deleted successfully.')

msg = '''Choices are
1-create
2-list all
3-edit
4-delete
5-exit app
Your Choice:'''
choice = int(input(msg))
while(choice!=5):
    if choice == 1:
        create_employee() 
    elif choice == 2:
        list_all()
    elif choice == 3:
        edit_employee() 
    elif choice == 4:
        delete_employee() 
    choice = int(input(msg))

print('End of employee application.')