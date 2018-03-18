/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaslips;
import java.util.Scanner;
/**
 *
 * @author Alisha
 */
public class StringArraySort {

    public static void main(String[] args) 
    {
        int n;
        String temp;
        Scanner s1 = new Scanner(System.in);
        
        System.out.println("Enter the number of names you want to enter:");
        n = s1.nextInt();
        
        String names[] = new String[n];
        System.out.println("Enter all the names: ");
        for(int i = 0; i < n; i++)
        {
            names[i] = s1.nextLine();
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (names[i].compareTo(names[j])>0) 
                {
                    temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                }
            }
        }
        System.out.print("Names in Sorted Order:");
        for (int i = 0; i < n - 1; i++) 
        {
            System.out.print(names[i] + ",");
        }
        System.out.print(names[n - 1]);
    }

    
}
