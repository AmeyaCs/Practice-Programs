/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package inheritance;

//example of multiple inheritance through interface

/**
 *
 * @author Alisha
 */
interface first
{
    default void display()
    {
        System.out.println("First Interface");
    }
}

interface second
{
    default void display()
    {
        System.out.println("Second Interface");
    }
}

class third implements first, second
{
    public void display()
    {
        first.super.display();
        second.super.display();
        System.out.println("Third class");
        
    }
}
public class Prog3 {
    
    public static void main(String[] args) {
        third tt = new third();
        
        tt.display();
    }
    
}
