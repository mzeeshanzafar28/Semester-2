import java.util.Scanner;
class Student {
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
        rollno = scn.nextInt();
        scn.nextLine();
        System.out.println("Enter Name : ");
        name = scn.nextLine();
        System.out.println("Enter Marks : ");
        marks = scn.nextInt();
       // scn.close();

    }

    void dispData()
    {
        System.out.println("Rollno = " + rollno);
        System.out.println("Name = " + name);
        System.out.println("Marks = " + marks);
    }

public static void main(String args[]) {
    Student s[] = new Student[2];
    int i = 0;
    for (i=0; i<2; i++) 
    {
    s[i] = new Student();
    s[i].inputData();
    }
    
    for (i=0; i<2; i++)
    s[i].dispData();
}


}