/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package autoboxingprog;

/**
 *
 * @author Acer
 */
public class AutoBoxingProg {
    
 
    
  
   

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         int a=100;  //boxing
    Integer p=new Integer(a);
   Integer a1=30;
    
   
   
   
   Integer z=new Integer(10);//Autoboxing
   
   int x=z;
        System.out.println("the  first values are : " + a + "\t" + p + "\t" + a1);
        System.out.println("The second values are : " + z + "\t" +  x);
        
        // TODO code application logic here
    }
    
}
