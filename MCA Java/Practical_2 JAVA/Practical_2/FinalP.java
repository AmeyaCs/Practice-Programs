/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package finalp;

/**
 *
 * @author Acer
 */
public class FinalP {
    
    final int a;
    
    FinalP()
    {
        a=10;
        
    }
    
    void show()
    {
        //a=a+1;
        System.out.println("the value of the variable is"+a);
    }
    
    
    

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        FinalP p=new FinalP();
        p.show();
        
        // TODO code application logic here
    }
    
}
