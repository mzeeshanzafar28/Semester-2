class Product:
    PId = 0
    Pname = ""
    Qty = 0
    
    def __init__(self,PId = None,Pname = None,Qty = None):
        if PId == None:
            self.PId = 0
            self.Pname = ""
            self.Qty = 0
        else:
            self.PId = PId
            self.Pname = Pname
            self.Qty = Qty
    
    def InputData(self):
        self.PId = int(input("Enter Product ID : "))
        self.Pname = input("Enter Product Name : ")
        self.Qty = int(input("Enter Quantity : "))
    
    def DispData(self):
        print("Product ID = ",self.PId)
        print("Product Name = ",self.Pname)
        print("Quantity = ",self.Qty)
    
    def GetPId(self):
        return self.PId
    
    def GetPname(self):
        return self.Pname
    
    def GetQty(self):
        return self.Qty

    def __del__(self):
        print("Destructor Called")

px = []
for i in range (0,10):
    temp = Product()
    px.append(temp)
    print("\n***Enter Data for Product ",i+1,"***\n")
    px[i].InputData()

for i in range (0,10):
    print("--------------------")
    px[i].DispData()