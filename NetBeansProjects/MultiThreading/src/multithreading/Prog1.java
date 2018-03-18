/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package multithreading;

/**
 *
 * @author Alisha
 */
class First extends Thread
{
    synchronized public void run()
    {
        System.out.println("First Thread");
        for(int i=1;i<11;i++){
            int num;
            num = 3 * i;
            System.out.println("3 * " + i + " = " + num);
        }
        System.out.println("First Thread ends");
    }
}

class Second extends Thread
{
    synchronized public void run()
    {
        System.out.println("Second Thread");
        for(int i=1;i<11;i++){
            int num = 0;
            num = 5 * i;
            System.out.println("5 * " + i + " = " + num);
        }
        System.out.println("Second Thread ends");
    }
}

class Third extends Thread
{
    synchronized public void run()
    {
        System.out.println("Third Thread");
        for(int i=1;i<11;i++){
            int num = 0;
            num = 7 * i;
            System.out.println("7 * " + i + " = " + num);
        }
        System.out.println("Third Thread ends");
    }
}

public class Prog1 extends Thread {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Thread t1 = new Thread();
        Thread.currentThread();
        System.out.println(t1);
        
        t1.setName("MyThread");
        System.out.println(t1);
        
        First a = new First();
        Second b = new Second();
        Third c = new Third();
        
        a.setPriority(1);
        b.setPriority(3);
        c.setPriority(2);
        
        a.start();      
        b.start();
        c.start();
        
    }
    
}
