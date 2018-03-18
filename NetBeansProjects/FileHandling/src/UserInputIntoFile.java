/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.*;

/**
 *
 * @author Alisha
 */
public class UserInputIntoFile {

    public static void main(String args[]) throws IOException {
        InputStreamReader cin = null;
        FileWriter out = null;
        out = new FileWriter("D:\\out.txt");

        try {
            cin = new InputStreamReader(System.in);
            System.out.println("Enter characters, 'q' to quit.");
            char c;
            do {
                c = (char) cin.read();
                //  System.out.print(c);
                out.write(c);
            } while (c != 'q');
        } finally {
            if (cin != null) {
                cin.close();
            }
            if (out != null) {
                out.close();
            }
        }
    }

}
