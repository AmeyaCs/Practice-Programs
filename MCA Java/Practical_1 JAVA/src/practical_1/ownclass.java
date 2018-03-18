/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical_1;

/**
 *
 * @author MCA
 */
import java.util.Scanner;
public class ownclass {
    public static void main(String args[]){
        String name, rollno;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Name:");
        name= sc.next();
        System.out.print("Enter Roll Number:");
        rollno=sc.next();
        System.out.println("Your name is:"+name+"and roll number is:"+rollno);
        
    }
}
