/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package inheritance;

/**
 *
 * @author Alisha
 */
class f1
{
    void show()
    {
        System.out.println("First");
    }
}

class f2 extends f1
{
    void show()
    {
        System.out.println("Second");
    }
}

class f3 extends f2
{
    void show()
    {
        System.out.println("Third");
    }
}

public class Prog4 {
    public static void main(String[] args) {
        f3 ff = new f3();
    ff.show();
    }
    
    
}
