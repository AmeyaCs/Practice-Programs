/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package inheritance;

//example of single inheritance
/**
 *
 * @author Alisha
 */

class Employee
{
    float salary = 25000;
}

class Programmer extends Employee
{
    float bonus = 10000;
}

public class Prog1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Programmer pr = new Programmer();
        
        System.out.println("Salary is " + pr.salary);
        System.out.println("Bonus is " + pr.bonus);
        // TODO code application logic here
    }
    
}
