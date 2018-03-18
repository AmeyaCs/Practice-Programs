/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largest;

import java.util.Scanner;

/**
 *
 * @author mca
 */
public class Largest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
         int a[][]=new int[5][5];
        Scanner r =new Scanner(System.in);
        System.out.println("Enter the values for the matrix");
        int p;
        int max=0;
         for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                 System.out.println("Enter the value for " + i +"-"+ j);
                p=r.nextInt();
                a[i][j]=p;
                
                
            }
    }
         
          for(int i=0;i<5;i++)
        {
            for(int j=0;j<4;j++)
            {
                max=a[i][j];
                if(a[i][j+1]>max)
                {
                    max=a[i][j+1];
                }
                //System.out.println(max);
               
            }
             System.out.println("the maximum no. from " + (i+1) + "th  row is " + max);
            }
         
    }
    
}
