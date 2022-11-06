public class Interface {

public static void main(String args[]) {

    interface A{
        public void method1();
        public void method2();
    }
abstract class B implements A{
    public void method1(){
        System.out.println("method1 of B called");
    }  
}

class C extends B
{
    public void method2()
    {
        System.out.println("Method2 of C called");
    }
}



}
    }