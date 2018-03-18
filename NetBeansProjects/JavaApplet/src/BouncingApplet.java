/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.applet.Applet;
/*<applet code=BouncingBallSmooth width=500 height=500></applet> */
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
 
public class BouncingApplet extends Applet implements Runnable
{
        int x,y;
        int dx,dy;
        Thread t;
        public void init()
        {
        x=40;
        y=40;
        dx=30;
        dy=30;
 
        t=new Thread(this);
        t.start();
        }
 
        public void run()
        {
                while(true)
                {
 
                if(x<40 || x>260)
                {
 
                        dx=-dx;
                }
                if(y<40 || y>230)
                {
 
                        dy=-dy;
                }
                x+=dx;
                y+=dy;
                        try
                        {
                                Thread.sleep(200);
                        }
                        catch(Exception e)
                        {
                        System.out.println(e);
                        }
                repaint();
                }
        }
 
        public void paint(Graphics g)
        {
                g.drawRect(10,10,300,270);
                g.setColor(Color.RED);
                g.fillOval(x,y,30,30);
        }
}
 

