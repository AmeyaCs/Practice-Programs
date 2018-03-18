/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inheritance;

//Interface declaration: by first user  
interface Drawable
{  
    void draw();  
}  


//Implementation: by second user  
class Rectangle implements Drawable
{  
    public void draw(){
        System.out.println("drawing rectangle");
    }  
}  


class Circle implements Drawable{  
    public void draw(){
        System.out.println("drawing circle");
    }  
}  


//Using interface: by third user  
class IntFace{  
    public static void main(String args[]){  
        Drawable d=new Circle();//In real scenario, object is provided by method e.g. getDrawable()  
        Drawable d1 = new Rectangle();
        d.draw();  
        d1.draw();
    }
}  

