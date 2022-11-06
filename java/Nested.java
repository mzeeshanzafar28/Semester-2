import java.io.*;
public class Nested {
    int Nested_X = 100;
    
    
    class Nested2 {
        int Nested2_X = 200;
    }

void function1()
{
    Nested2 ns = new Nested2();
    System.out.println("Nested2_X = " +ns.Nested2_X );
}

void function2()
{
    Nested ns = new Nested();
    System.out.println("Nested_X = " +ns.Nested_X );
}


public static void main(String args[]) {
    Nested n = new Nested();
    n.function1();
    n.function2();
}


}
