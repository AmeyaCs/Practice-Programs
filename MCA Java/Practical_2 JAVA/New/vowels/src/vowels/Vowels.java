/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vowels;

import java.util.Scanner;

/**
 *
 * @author mca
 */
public class Vowels {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
          char a[][]=new char[5][5];
         int c1=0,c2=0,c3=0,c4=0,c5=0;
        Scanner r = new Scanner(System.in);
        System.out.println("Enter the values for the matrix");
        char p;
        int max=0;
         for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                 System.out.println("Enter the value for " + i +"-"+ j);
                p=r.next().charAt(0);
                a[i][j]=p;
                
                
                
            }
    }
         
          for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
              if(a[i][j]=='a')
              {
                  c1++;
              }
              else if(a[i][j]=='e')
              {
                  c2++;
              }
              else if(a[i][j]=='i')
              {
                  c3++;
              }
              else if(a[i][j]=='o')
              {
                  c4++;
              }
              else if(a[i][j]=='u')
              {
                  c5++;
              }
                //System.out.println(max);
               
            }
             System.out.println("the maximum no. from " + (i+1) + "th  row is " + max);
            }
         System.out.println("The number of elements with a " + c1);
             System.out.println("The number of elements with e " + c2);
              System.out.println("The number of elements with i " + c3);
               System.out.println("The number of elements with o " + c4);
                System.out.println("The number of elements with u " + c5);
    }
    
    }
    

