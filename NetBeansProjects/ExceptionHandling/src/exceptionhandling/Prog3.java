/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package exceptionhandling;

/**
 *
 * @author Alisha
 */
public class Prog3 {
    public static void main(String[] args) {
        int a = 0;
        int[] arr = new int[2];
        try
        {
            //int b = 10/a;
            System.out.println(arr[4]);
            System.out.println(a); //this will be skipped as the control jumps to the catch block
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);
        }
        //System. out.println(a); //will be executed after the error is caught and handled
        
        finally
        {
              System.out.println("Value of a is " + a);  //executes regardless of whether an exception has occured or not
        }
        
    }
}
