<%-- 
    Document   : select
    Created on : Apr 25, 2017, 8:18:36 PM
    Author     : Alisha
--%>

<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.Connection"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<%
    
    out.println("Here0");
    try{
      
        
        Class.forName("org.apache.derby.jdbc.ClientDriver");
        Connection con = DriverManager.getConnection("jdbc:derby://localhost:1527/newdb");
      
        String sql="select * from student";
        
        PreparedStatement ps = con.prepareStatement(sql);
          
        ResultSet rs = ps.executeQuery();
        out.println("Here0");
        while(rs.next())
        {
            out.println("RollNo. "+rs.getInt(1)+ " Name: "+rs.getString(2)+" Semester: "+rs.getString(3)+ " Course: "+rs.getString(4));
        }
                
    }
    
    catch(Exception e){
        System.out.println(e);
        
        
    }
    %>
