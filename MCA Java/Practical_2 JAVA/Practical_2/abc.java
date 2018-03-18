/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package superp;

/**
 *
 * @author Acer
 */

public class abc {
    
    void disp()
    {
        System.out.println("im inside base class display");
    }
}

    /**
     * @param args the command line arguments
     */
    
    class Program extends abc
    {
        void disp()
        {
            System.out.println("im inside derived class display ");
           super.disp();
        }
    }
 class SuperP {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Program p=new Program();
        p.disp();
        // TODO code application logic here
    }
    
}
