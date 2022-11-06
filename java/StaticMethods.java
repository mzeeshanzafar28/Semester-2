class StaticMethods {
   
    static int i = 7;
   
    public static void function1()
   {
       System.out.println("Your Entered Value for i using function1 = " + i);
                                }

    public static void main(String args[]) {
        int i = 10;
        System.out.println("Your set value for simple i = " +i);
        function1();
        function2();
    }
    
    public static void function2() {
        System.out.println("The value of i using funcion2 = " +i);
    }

}