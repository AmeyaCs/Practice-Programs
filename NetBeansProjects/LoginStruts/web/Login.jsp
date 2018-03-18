<%-- 
    Document   : Login
    Created on : 24 Apr, 2017, 10:06:15 PM
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
        <h1>Login Here!!</h1>
        <form action="loginform.do" method="POST">
            Enter Username:<input type="text" name="username" value="" /><br>
            Enter Password:<input type="password" name="password" value="" /><br>
            <input type="submit" value="submit" />
        </form>
    </body>
</html>
