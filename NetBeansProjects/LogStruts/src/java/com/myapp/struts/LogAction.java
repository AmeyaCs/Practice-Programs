/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.myapp.struts;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import javax.servlet.RequestDispatcher;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.struts.action.ActionForm;
import org.apache.struts.action.ActionForward;
import org.apache.struts.action.ActionMapping;

/**
 *
 * @author Alisha
 */
public class LogAction extends org.apache.struts.action.Action {

    /* forward name="success" path="" */
    private static final String SUCCESS = "Successjsp";
    private static final String ERROR = "Errorjsp";

    /**
     * This is the action called from the Struts framework.
     *
     * @param mapping The ActionMapping used to select this instance.
     * @param form The optional ActionForm bean for this request.
     * @param request The HTTP Request we are processing.
     * @param response The HTTP Response we are processing.
     * @throws java.lang.Exception
     * @return
     */
    @Override
    public ActionForward execute(ActionMapping mapping, ActionForm form,
            HttpServletRequest request, HttpServletResponse response)
            throws Exception {
        
        LogBean lb=(LogBean)form;
        boolean status;
        
        
        /*if(lb.getUsername().equals("abc") && lb.getPassword().equals("abcd"))
            return mapping.findForward(SUCCESS);
        else
            return mapping.findForward(ERROR);*/
                
        
              
            
            Class.forName("org.apache.derby.jdbc.ClientDriver");
            Connection con = DriverManager.getConnection("jdbc:derby://localhost:1527/newdb");
            
            String sql = "select * from login where username=? and passwd=?";
            
            PreparedStatement ps = con.prepareStatement(sql);
            ps.setString(1,lb.getUsername());
            ps.setString(2,lb.getPassword());
            
            ResultSet rs = ps.executeQuery();
            status = rs.next();
            
            if(status)
                return mapping.findForward(SUCCESS);             
            else
                return mapping.findForward(ERROR);
            
            
        
        
              
    }
}
