/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exceptionhandling;

import java.util.Scanner;

/**
 *
 * @author Alisha
 */
public class NumFormatException {

    static int input;
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Enter an integer number: ");

        try {
            input = Integer.parseInt(scan.next());
            System.out.println("You've entered number: " + input);
        } catch (NumberFormatException e) {
            System.out.println("You've entered non-integer number");
            System.out.println("This caused " + e);
        }
    }

}
