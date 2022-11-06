import java.util.Scanner;
public class ConsoleInput {
    public static void main(String args[]) {

        int rollno;
        String name;
        int marks;

        Scanner scn = new Scanner(System.in);
        System.out.println("Enter Rollno : ");
        rollno = scn.nextInt();
        scn.nextLine();
        System.out.println("Enter Name : ");
        name = scn.nextLine();
        System.out.println("Enter Marks : ");
        marks = scn.nextInt();
        scn.close();

        System.out.println("\n***Your Entered Data***\n");
        System.out.println("Rollno = " +rollno);
        System.out.println("Name = " +name);
        System.out.println("Marks = "+marks);
    }
}
