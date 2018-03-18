/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.*;
import java.util.*;

/**
 *
 * @author Alisha
 */
public class CountInFile {

    public static void main(String args[]) throws IOException {
        FileReader fReader;
        try {
            File file = new File("D:\\newfile1.txt");
            System.out.println("Number of Bytes in file: " + file.length());

            fReader = new FileReader("D:\\newfile1.txt");
            BufferedReader reader = new BufferedReader(fReader);
            String cursor; // 
            String content = "";
            int lines = 0;
            int words = 0;
            int chars = 0;
            while ((cursor = reader.readLine()) != null) {
                // count lines
                lines += 1;
                content += cursor;
                chars = content.length();
                String[] _words = cursor.split(" ");
                for (String w : _words) {
                    words++;
                }
            }

            //System.out.println("File " + fileName + " has ");
            System.out.println(chars + " Characters,");
            System.out.println(words + " words and " + lines + " lines.");
        } finally {
        }
    }

}
