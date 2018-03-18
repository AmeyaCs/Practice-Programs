/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vectorprog;

/**
 *
 * @author Acer
 */
import java.util.Vector;
public class VectorProg {

    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        Vector v=new Vector(4,2);
        System.out.println("the initial size is:"+v.size());
        System.out.println("the initial capacity:"+v.capacity());
        
        v.addElement(new Integer(1));
        v.addElement(new Integer(2));
        System.out.println("the  size after adding elements is:"+v.size());
        System.out.println("the capacity after adding elements:"+v.capacity());
        
        v.addElement(new Double(12.5));
        v.addElement(new Integer(5));
        
        System.out.println("the  size after adding elements is:"+v.size());
        System.out.println("the capacity after adding elements:"+v.capacity());
        
        v.addElement(new Integer(76));
        System.out.println("the  size after adding elements is:"+v.size());
        System.out.println("the capacity after adding elements:"+v.capacity());
        
        //display contents of vector
        for(int i=0;i<v.size();i++)
        {
            System.out.println("  "+v.get(i));
        }
        
        // TODO code application logic here
    }
    
}
