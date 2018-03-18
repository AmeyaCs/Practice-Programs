
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Alisha
 */
public class DeleteFile {
    public static void main(String[] args) { 
      try {
         //BufferedWriter out = new BufferedWriter (new FileWriter("D:\\newfile1.txt"));
         //out.write("aString1\n");
         
         //out.close();
         
         boolean success = (new File("D:\\newfile1.txt")).delete();
         
         if (success) {
            System.out.println("The file has been successfully deleted"); 
         }
         BufferedReader in = new BufferedReader(new FileReader("filename"));
         String str;
         
         while ((str = in.readLine()) != null) {
            System.out.println(str);
         }
         in.close();
      }catch (IOException e) {
         System.out.println("exception occoured"+ e);
         System.out.println("File does not exist or you are trying to read a file that has been deleted");
      }
   }
}
