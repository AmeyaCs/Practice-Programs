/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package inheritance;

//example of multiple inheritance
/**
 *
 * @author Alisha
 */
class Animal
{
    void eat()
    {
        System.out.println("Every animal eats");
    }
}
class Dog extends Animal
{
    void barks()
    {
        System.out.println("Every dog barks");
    }
}

class Puppy extends Dog
{
    void weeps()
    {
        System.out.println("Puppy weeps");
    }
}
public class Prog2 {
    
    
    public static void main(String[] args) {
        
        Puppy pp = new Puppy();
        pp.eat();
        pp.barks();
        pp.weeps();       
    }
    
}
