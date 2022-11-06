import pickle
class Product:
    PId = 0
    PName = ""
    Qty = 0
    def __init__(self, PId = None, PName = None, Qty = None):
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

ar1 = []
for i in range(0,10):
    temp = Product()
    ar1.append(temp)
    print("\n***Enter Data for Product ",i+1," ***\n")
    ar1[i].InputData()
print("--------------------")

ofs = open("product.bin","wb")
for i in range (0,10):
    pickle.dump(ar1[i],ofs,pickle.DEFAULT_PROTOCOL)
ofs.close()

arr2 = []
p = Product()
try:
    ifs = open("product.bin","rb")
    p = pickle.load(ifs)
    while p:
        arr2.append(p)
        p = pickle.load(ifs)
except EOFError:
    pass
ifs.close()

high = arr2[0].Qty
loc = 0
for i in range (1,len(arr2)):
    if arr2[i].Qty > high:
        high = arr2[i].Qty
        loc = i
print("\nData of Product having Highest Quantity :\n")
arr2[loc].DispData()