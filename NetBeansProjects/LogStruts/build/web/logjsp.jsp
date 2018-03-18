<%-- 
    Document   : logjsp
    Created on : Apr 25, 2017, 6:59:55 PM
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
        <form action="LogAction.do" method="POST">
            Enter Username:<input type="text" name="username" value="" /><br>
            Enter Password:<input type="password" name="password" value="" /><br>
            <input type="submit" value="submit" />
        </form>
    </body>
</html>
