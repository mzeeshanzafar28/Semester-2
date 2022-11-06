public class arrayEG {
    public static void main(String args[]){

        int a[] = new int[10];
        int i = 0;
        for (i=0; i<10; i++)
        {
            a[i] = i*2;
           // System.out.println(a[i]);
        }

        for (i=0; i<10; i++)
        {
            System.out.println(a[i]);
        }
    }
}
