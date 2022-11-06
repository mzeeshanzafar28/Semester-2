import java.util.Scanner;
public class Box {
    int width;
    int height;
    String name;
    void setData(int w,int h,String n)
    {
        width = w;
        height = h;
        name = n;
    }


    void dispData()
    {
        System.out.println("\nWidth = " + width);
        System.out.println("Height = " + height);
        System.out.println("Name = " + name);
    }

    void inputData()
    {
        Scanner scn = new Scanner(System.in);
        System.out.println("!!!Give Width!!!");
        width = scn.nextInt();
        scn.nextLine();
        System.out.print("!!!Give Height!!!");
        height = scn.nextInt();
        scn.nextLine();
        System.out.println("!!!Give Name!!!");
        name = scn.nextLine();
        scn.close();
    }

    public static void main(String args[]) {
        Box b = new Box();
        b.inputData();
        b.dispData();
    }

}
