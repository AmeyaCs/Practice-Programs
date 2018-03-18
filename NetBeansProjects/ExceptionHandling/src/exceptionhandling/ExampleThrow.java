/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package exceptionhandling;
//example of User-defind Exception

/**
 *
 * @author Alisha
 */
class MyExp extends Exception //Exception is a sub-class of Throwable, so Throwable can also be used
{
    MyExp(String message)
    {
        super(message);
    }
}

class ExampleThrow {
    public static void main(String[] args) {
        try
        {
            int z = 25;
            
            if(z < 30)
            {
            
                throw new MyExp("Number is small");
            }           
        }
        catch(MyExp e)
        {
            System.out.println(e.getMessage());
            
        }
    }
    
}
