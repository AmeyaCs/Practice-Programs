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
public class RenameFile {
    public static void main(String[] args) {
      File oldName = new File("D:\\out.txt");
      File newName = new File("D:\\NewOut.txt");
      
      if(oldName.renameTo(newName)) {
         System.out.println("renamed");
      } else {
         System.out.println("Error");
      }
   }
}
