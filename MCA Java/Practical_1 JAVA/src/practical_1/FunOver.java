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
public class FunOver {
    public int add(int a,int b){
        return(a+b);
    }
    public float add(float a, float b){
        return(a+b);
    }
    public static void main(String args[]){
       FunOver obj=new FunOver();
       int result=obj.add(6, 3);
       float result1=obj.add(7.2f, 4.5f);
    System.out.println("Int Result="+result+" Float Result="+result1);   
    }
            
}
