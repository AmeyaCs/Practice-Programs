/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Alisha
 */
public class InheritConstructor {

    InheritConstructor() {

        System.out.println("Base class");
    }
    
    
    
    

}

class DerivedInheritConstructor extends InheritConstructor {

    DerivedInheritConstructor() {

        System.out.println("Derived class");
    }
    
    

    public static void main(String[] args) {
        DerivedInheritConstructor dic = new DerivedInheritConstructor();

    }
}