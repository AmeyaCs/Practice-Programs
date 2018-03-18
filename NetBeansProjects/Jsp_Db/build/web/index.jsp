<%-- 
    Document   : index
    Created on : Apr 25, 2017, 7:39:14 PM
    Author     : Alisha
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <form action="insert.jsp" method="POST">
            Enter RollNo.: <input type="text" name="rollno" value="" /><br>
            Enter Name.: <input type="text" name="name" value="" /><br>
            Enter Semester.: <input type="text" name="semester" value="" /><br>
            Enter Course.: <input type="text" name="course" value="" /><br>
            <input type="submit" value="Insert Data" name="b1" />
            
        </form>
        
    </body>
</html>
