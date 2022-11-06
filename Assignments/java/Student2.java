import java.util.Scanner;
public class Student2 {
    int rollno;
    String name;
    int marks;

    void setData(int r,String n,int m)
    {
        rollno = r;
        name = n;
        marks = m;
    }

    void inputData()
    {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter Rollno : ");
        scn.nextInt();
        scn.nextLine();
        System.out.println("Enter Name : ");
        scn.nextLine();
        System.out.println("Enter Marks : ");
        scn.nextInt();
        scn.close();
    }

    void dispData()
    {
        System.out.println("Rollno = " + rollno);
        System.out.println("Name = " + name);
        System.out.println("marks = " + marks);

    }

    public static void main(String args[]) {
        Student2 s2[] = new Student2[10];
        int i = 0;
        for (i=0; i<10; i++)
        {
            s2[i].inputData();
        }

        for (i=0; i<10; i++)
        {
            s2[i].dispData();
        }

        int high = s2[0].marks;
        int loc = 0;
        for (i=1; i<10; i++)
        {
            if (s2[i].marks > high)
            {
                high = s2[i].marks;
                loc = i;
            }

        System.out.println("\n\n***Data of the student having highest marks***");
        s2[loc].dispData();
        }
    
    }
}
