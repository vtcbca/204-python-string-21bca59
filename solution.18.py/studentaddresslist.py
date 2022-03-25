# create a list student and address
student=[]
address=[]
count=0
def createlist():
    for i in range(3):
        i=input("Enter name of the student:")
        n=input("Enter address of the student:")
        student.append(i)
        address.append(n)

createlist()
for i in range(3):
    print('{}-->{}.'.format(student[i],address[i]))
