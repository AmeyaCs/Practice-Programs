<%-- 
    Document   : insert
    Created on : Apr 25, 2017, 7:44:53 PM
    Author     : Alisha
--%>

<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.Connection"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<%
    Integer rollno = Integer.parseInt(request.getParameter("rollno"));
    String name = request.getParameter("name");
    String semester = request.getParameter("semester");
    String course = request.getParameter("course");
    
    try{
        
        
        Class.forName("org.apache.derby.jdbc.ClientDriver");
        Connection con = DriverManager.getConnection("jdbc:derby://localhost:1527/newdb");
          
        String sql="insert into student values(?,?,?,?)";
        
        PreparedStatement ps = con.prepareStatement(sql);
          
          
          
        ps.setInt(1,rollno);
        ps.setString(2,name);
        ps.setString(3,semester);
        ps.setString(4,course);
        
        int i=ps.executeUpdate();
        
        
        
        if(i>0)
        {
            out.println("Registered Successfully!!!");
        }
        else
        {
            out.println("Try Again");
        }
                
    }
    
    catch(Exception e){
        System.out.println(e);
        
        
    }
    %>
    
    
    <html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form action="select.jsp" method="POST">
            <br><input type="submit" value="View Data" name="b1" />
            
        </form>
        
    </body>
</html>
