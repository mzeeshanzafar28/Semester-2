class MyThread extends Thread {

    public static void main(String args[]){


    public void run()
    {
        for (int i =0; i<20; i++)
        {
                try {
                    Thread.sleep(500);
                    String s = Thread.currentThread().getName();
                    System.out.println("i =" + i + " " +s);
                } catch(Exception e){}


          }
      }
   }
}

class Test{
    public static void main(String args[]){

        MyThread mt1 = new MyThread();
        MyThread mt2 = new MyThread();
        mt1.start();
        mt2.start();
        //mt1.join();
        //mt2.join();
    }
}