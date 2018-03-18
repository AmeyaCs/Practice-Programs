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
public class StaticPract {
    static int count=1;
    StaticPract(){
        System.out.println("Creating object no.:"+count++);
        
    }
public static void main(String args[]){
    new StaticPract();
    new StaticPract();
    new StaticPract();
    new StaticPract();
    }
}
