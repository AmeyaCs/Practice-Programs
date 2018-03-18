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
public class Practical_1_A {
    int month, year, date;    
    public void readdata(){
        System.out.print("Enter Date:");
        Scanner Sc;
        Sc = new Scanner (System.in);
        date=Sc.nextInt();
        month=Sc.nextInt();
        year=Sc.nextInt();
        Sc.close();
    }
    public void checkMagic(){
        if( (date*month)==year )
            System.out.println("Date is Magic!");
        else{
            System.out.println("Date is not Magic.");
        }
    }
    public static void main(String args[]){
        Practical_1_A obj=new Practical_1_A();
        obj.readdata();
        obj.checkMagic();
    }
}
