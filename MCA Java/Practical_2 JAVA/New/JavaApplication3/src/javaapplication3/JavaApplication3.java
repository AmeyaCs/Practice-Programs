/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 *
 * @author mca
 */
import java.util.*;

public class JavaApplication3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a[][]=new int[5][5];
        Scanner r =new Scanner(System.in);
        System.out.println("Enter the values for the matrix");
        int p;
        int c1=0,c2=0,c3=0,c4=0,c5=0;
        
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                System.out.println("Enter the value for " + i +"-"+ j);
                p=r.nextInt();
                if(p<=20)
                {
                    c1++;
                }
                else if(p>20 && p<=40)
                {
                    c2++;
                }
                else if(p>40 && p<=60)
                {
                    c3++;
                }
                else if(p>60 && p<=80)
                {
                    c4++;
                }
                else if(p>80 && p<=100)
                {
                    c5++;
                }
                else
                {
                    System.out.println("");
                }
                
            }}
            System.out.println("The number of elements in range 1-20 is" + c1);
             System.out.println("The number of elements in range 21-40 is" + c2);
              System.out.println("The number of elements in range 41-60 is" + c3);
               System.out.println("The number of elements in range 61-80 is" + c4);
                System.out.println("The number of elements in range 81-100 is" + c5);
            
        }
        
        
    }
    

