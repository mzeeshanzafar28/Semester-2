class Employee:
    EId = 0
    Ename = ""
    
    def __init__(self,EId = None, Ename = None):
        if EId == None:
            self.EId = EId
            self.Ename = Ename
    
    def SetData(self,EId,Ename):
        self.EId = EId
        self.Ename = Ename
    
    def InputData(self):
        self.EId = int(input("Enter EId : "))
        self.Ename = input("Enter Ename : ")
    
    def DispData(self):
        print("Employee ID = ",self.EId)
        print("Employee Name = ",self.Ename)
    
    def GetEId(self):
        return self.EId
    
    def GetEname(self):
        return self.Ename
    
    def __del__(self):
        print("Employee Destructor Called")
    

class EmployeeRegular(Employee):
    
    ESalary = 0

    def __init__(self,EId = None , Ename = None , ESalary = None):
        if EId == None:
            Employee.__init__(self)
            self.ESalary = 0
        else:
            Employee.__init__(self,EId,Ename)
            self.ESalary = ESalary

    def SetData(self,EId,Ename,ESalary):
        Employee.SetData(self,EId,Ename)
        self.ESalary = ESalary

    def InputData(self):
        Employee.InputData(self)
        self.ESalary = int(input("Enter Employee Salary : "))
    
    def DispData(self):
        Employee.DispData(self)
        print("Employee Salary = ",self.ESalary)

    def GetEId(self):
        return Employee.GetEId(self)

    def GetEname(self):
        return Employee.GetEname(self)

    def GetESalary(self):
        return self.ESalary

    def __del__(self):
        print("EmployeeRegular Destructor Called")



class EmployeePartTime(Employee):
    
    EHours = 0
    ERate = 0
    ESalary = 0

    def __init__(self,EId = None , Ename = None , EHours = None , ERate = None):
        if EId == None:
            Employee.__init__(self)
            EHours = 0
            ERate = 0
            ESalary = 0
        else:
            Employee.__init__(self, EId,Ename,EHours,ERate)
            self.EHours = EHours
            self.ERate = ERate

    def SetData(self,EId,Ename,EHours,ERate):
        Employee.SetData(self,EId,Ename)
        self.EHours = EHours
        self.ERate = ERate

    def InputData(self):
        Employee.InputData(self)
        self.EHours = int(input("Enter Employee Hours : "))
        self.ERate = int(input("Enter Employee Rate : "))
   
    def DispData(self):
        Employee.DispData(self)
        print("Employee Hours = ",self.EHours)
        print("Employee Rate = ",self.ERate)
        print("Employee Salary = ",self.EHours*self.ERate)
   
    def GetEId(self):
        return Employee.GetEId(self)

    def GetEname(self):
        return Employee.GetEname(self)

    def GetEHours(self):
        return self.EHours

    def GetERate(self):
        return self.ERate

    def GetESalary(self,EHours=None,ERate=None):
        ESalary = self.EHours*self.ERate
        return ESalary
        
    def __del__(self):
        print("EmployeePartTime Destructor Called")



er = []

for i in range (0,3):
    tempER = EmployeeRegular()
    er.append(tempER)
    print("\n***Enter Data for Employee Regular ",i+1," ***\n")
    er[i].InputData()


ept = []

for i in range (0,2):
    tempEPT = EmployeePartTime()
    ept.append(tempEPT)
    print("\n***Enter Data for Employee Part Time ",i+1," ***\n")
    ept[i].InputData()

for i in range (0,3):
    print("-------------------")
    er[i].DispData()
    print("-------------------")

for i in range (0,2):
    print("-------------------")
    ept[i].DispData()
    print("-------------------")

high = er[0].GetESalary()
loc = 0
for i in range (1,3):
    if er[i].GetESalary() > high:
        high = er[i].GetESalary()
        loc = i
print("\n***------------****")
print("Employee Regular Having Highest Salary")
print("***------------****")
er[loc].DispData()


high2 = ept[0].GetESalary()
loc2 = 0
for i in range (1,2):
    if ept[i].GetESalary() > high2:
        high2 = ept[i].GetESalary()
        loc2 = i
print("\n***------------****")
print("Employee Part Time Having Highest Salary")
print("***------------****")
ept[loc2].DispData()