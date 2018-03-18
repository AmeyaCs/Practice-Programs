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
public class Prog4 {
    
    int a = 0;
    public static void main(String[] args) {
        
        try
        {
            int b = (int) Math.pow(999999999,1234567892);
            System.out.println(b);
        }
        
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        
    }
    
}
