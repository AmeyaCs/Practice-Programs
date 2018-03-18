/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

class Adder
{  
    int add(int a,int b){
        return a+b;
    }  
    int add(int a,int b,int c){
        return a+b+c;
    }  
}  

class MethodOver{  
public static void main(String[] args)
{  
    Adder ob = new Adder();
    System.out.println(ob.add(11,11)+"   ");
    System.out.println(ob.add(10,10,10)+"  ");
}}  
