import pickle

class Car:
    Model  = ""
    Price = 0
    
    def __init__(self, Model = None, Price = None):
        if Price == None:
            self.Model = ""
            self.Price = 0
        else:
            self.Model = Model
            self.Price = Price
    
    def SetData(self,Model,Price):
        self.Model = Model
        self.Price = Price

    def InputData(self):
        self.Model = input("Enter Model : ")
        self.Price = int(input("Enter Price : "))

    def DispData(self):
        print("Model = ",self.Model)
        print("Price = ",self.Price)

    def GetModel(self):
        return self.Model

    def GetPrice(self):
        return self.Price

    def __del__(self):
        print("Car Destructor Called")

class Jeep(Car):
    Roof = ""
    Speed = 0

    def __init__(self,Model = None , Price = None, Roof = None, Speed = None):
        if Speed == None:
            Car.__init__(self)
            self.Roof = ""
            self.Speed  = 0
        else:
            Car.__init__(self,Model,Price)
            self.Roof = Roof
            self.Speed= Speed

    def SetData(self,Model,Price,Roof,Speed):
        Car.SetData(self,Model,Price)
        self.Roof = Roof
        self.Speed = Speed

    def InputData(self):
        Car.InputData(self)
        self.Roof = input("Enter Roof Type : ")
        self.Speed = int(input("Enter Speed Limit : "))
    
    def DispData(self):
        Car.DispData(self)
        print("Roof Type = ",self.Roof)
        print("Speed Limit = ",self.Speed)

    def GetModel(self):
        return Car.GetModel(self)

    def GetPrice(self):
        return Car.GetPrice(self)

    def GetRoof(self):
        return self.Roof

    def GetSpeed(self):
        return self.Speed

    def __del__(self):
        print("Jeep Destructor Called")


arr1 = []
for i in range (0,6):
    temp = Jeep()
    arr1.append(temp)
    print("\n***Enter Data for Jeep ",i+1," ***\n")
    arr1[i].InputData()

ofs = open("Car.bin","wb")
for i in range(0,6):
    pickle.dump(arr1[i],ofs,pickle.DEFAULT_PROTOCOL)
ofs.close()

arr2 = []
c = Car()
try:
    ifs = open("Car.bin","rb")
    c = pickle.load(ifs)
    while c:
        arr2.append(c)
        c = pickle.load(ifs)
except EOFError:
    pass
ifs.close()

for i in range (0,len(arr2)):
    arr2[i].DispData()