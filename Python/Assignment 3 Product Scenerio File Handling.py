import pickle
class Product:
    PId = 0
    PName = ""
    Qty = 0

    def __init__(self, PId = None,PName = None, Qty = None):
        if PId == None:
            self.PId = 0
            self.PName = ""
            self.Qty = 0
        else:
            self.PId = PId
            self.PName = PName
            self.Qty = Qty

    def InputData(self):
        self.PId = int(input("Enter PId : "))
        self.PName = input("Enter PName : ")
        self.Qty = int(input("Enter Qty : "))
    
    def SetData(self,PId,PName,Qty):
        self.PId = PId
        self.PName = PName
        self.Qty = Qty

    def DispData(self):
        print("PId = ",self.PId)
        print("PName = ",self.PName)
        print("Qty = ",self.Qty)

    def GetPId(self):
        return self.PId

    def GetPName(self):
        return self.PName

    def GetQty(self):
        return self.Qty

    def __del__(self):
        print("Destructor Called")

arr = []
for i in range(0,10):
    temp = Product()
    arr.append(temp)
    print("\n-----Enter Data for Product ",i+1," -----")
    arr[i].InputData()

ofs = open("Product.bin","wb")
for i in range (0,10):
    pickle.dump(arr[i],ofs,pickle.DEFAULT_PROTOCOL)
ofs.close()
print("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-")
try:
    ifs = open("Product.bin","rb")
    p = pickle.load(ifs)
    while p:
        p.DispData()
        print("-----------------")
        p = pickle.load(ifs)
except EOFError:
        pass
ifs.close()
