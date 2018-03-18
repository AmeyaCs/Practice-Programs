/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practical_1;
import java.util.Scanner;

/**
 *
 * @author MCA
 */
public class ConstOver {
    ConstOver(){
        System.out.println("Time in Hrs=12");
    }
    ConstOver(int a, int b){
        System.out.println("Time in Hrs="+a+" Time in minutes"+b);
    }
    ConstOver(int a, int b, int c){
        System.out.println("Time in Hrs="+a+" Time in minutes="+b+" Time in Seconds="+c);
    }
    public static void main(String args[]){
        ConstOver c1=new ConstOver();
        ConstOver c2=new ConstOver(12,24);
        ConstOver c3=new ConstOver(12,24,54);

    }
}
