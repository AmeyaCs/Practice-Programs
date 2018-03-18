/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaslips;

/**
 *
 * @author Alisha
 */
class CountObjects {

    static int count = 0;

    public static void main(String arg[]) {
        CountObjects c1 = new CountObjects();
        c1.count();
        CountObjects c2 = new CountObjects();
        c2.count();
        CountObjects c3 = new CountObjects();
        c3.count();
        System.out.println("Number of Objects=" + count);
    }

    static void count() {
        count++;
    }
}
