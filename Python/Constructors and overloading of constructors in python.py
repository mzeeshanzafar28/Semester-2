class MyClass:
    j = 0
    def __init__(self,j=None):
        if  j==None:
            self.j = 0
        else:
            self.j = j
    def DispData(self):
        print("j = ",self.j)
obj1 = MyClass(7)
obj1.DispData()
