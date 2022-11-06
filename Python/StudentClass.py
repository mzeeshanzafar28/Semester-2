class Student:
    rollno = 0
    name = ""
    marks = 0

    def __init__(self,rollno = None,name = None,marks = None):
        if rollno == None:
            self.rollno = 0
            self.name = ""
            self.marks = 0
        else:
            self.rollno = rollno
            self.name = name
            self.marks = marks
    
    def DispData(self):
        print("Rollno = ",self.rollno)
        print("Name = ",self.name)
        print("Marks = ",self.marks)
    
    def InputData(self):
        self.rollno = int(input("Enter Rollno : "))
        self.name = input("Enter Name : ")
        self.marks = int(input("Enter Marks : "))
    
    def GetRollno(self):
        return self.rollno
    
    def GetName(self):
        return self.name
    
    def GetMarks(self):
        return self.marks
    
    def __del__(self):
        print("Destructor Called")

s1 = Student()
s2 = Student(1,"abc",32)
s1.DispData()
s2.DispData()

#list of objects

s3 = []
for i in range (0,3):
    temp = Student()
    s3.append(temp)
    s3[i].InputData()
for i in range (0,3):
    s3[i].DispData()

print("Marks of 2nd Student in list = ", s3[2].marks)
print("Marks of 3rd Student in list = ",s3[2].GetMarks())