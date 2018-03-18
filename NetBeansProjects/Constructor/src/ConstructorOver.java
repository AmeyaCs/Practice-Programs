/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package unitone;

import java.io.*;

/**
 *
 * @author Alisha
 */
public class ConstructorOver {

    String name;
    int age;
    double salary, weight;

    ConstructorOver() {
        name = "Alisha";
        age = 21;
        salary = 25000;
        weight = 49.5;

    }

    void ConstructorOver(String n, int a) {
        name = n;
        age = a;
        salary = 30000;
        weight = 35;

    }

    void ConstructorOver(String n, int a, double s, double w) {
        name = n;
        age = a;
        salary = s;
        weight = w;

    }

    void display() {
        System.out.println("Name: " + name + " Age: " + age + " Salary: " + salary+" Weight: " + weight);
    }

    public static void main(String[] args) {
        ConstructorOver cs = new ConstructorOver();
        String s2 = "Divya";
        cs.display();
        cs.ConstructorOver(s2, 23);
        cs.display();
        cs.ConstructorOver("Snehal", 22, 40000, 30.8);
        cs.display();
    }

    //if you use 'void Constructr' then you cannot pass parameters directly while creating objects
    // use cs.Constructr(parameters) while using void
}
