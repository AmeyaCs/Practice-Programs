/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Alisha
 */
public class CopyConstruct {

    /**
     * @param args the command line arguments
     */
    String name;
    int age;

    CopyConstruct() {

    }

    CopyConstruct(String s, int a) {
        name = s;
        age = a;
    }

    void display() {
        System.out.println("Name: " + name + " Age: " + age);
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here

        CopyConstruct cs = new CopyConstruct("Alisha", 20);
        cs.display();
        System.out.println("\nBefore copying:");
        CopyConstruct cs1 = new CopyConstruct();
        cs1.display();
        cs1.name = cs.name;
        cs1.age = cs.age;
        System.out.println("\nAfter copying:");
        cs1.display();
        
        
    }

}

