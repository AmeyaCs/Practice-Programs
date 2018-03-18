/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package finalmethod;

/**
 *
 * @author Acer
 */
public class Finalmethod {
    
    final void disp()
    {
        
        System.out.println("hey there");
       
    }
}

class hello extends Finalmethod
{
    void show()
    {
        System.out.println("hello");
    }
    
}
    /**
     * @param args the command line arguments
     */
class Demo
{
    public static void main(String[] args) {
      
hello h=new hello();
h.disp();
// TODO code application logic here
    }
    
}
