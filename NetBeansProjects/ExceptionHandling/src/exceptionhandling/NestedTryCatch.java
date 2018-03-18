/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exceptionhandling;

/**
 *
 * @author Alisha
 */
class NestedTryCatch {

    public static void main(String args[]) {
        try {
            try {
                System.out.println("Going to divide");
                int b = 39 / 0;
            } catch (ArithmeticException e) {
                System.out.println(e);
            }

            try {
                int a[] = new int[5];
                a[5] = 4;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e);
            }

            System.out.println("Other statements");
        } catch (Exception e) {
            System.out.println("Handled");
        }

        System.out.println("Normal flow..");
    }
}
