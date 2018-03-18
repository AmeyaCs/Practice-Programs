/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package facpackage;

import javax.ejb.Stateless;

/**
 *
 * @author Alisha
 */
@Stateless
public class FacBean implements FacBeanRemote {

    @Override
    public int factorial(int num) {
        int res=1;
        for(int i=1;i<=num;i++)
            res=res*i;
        return res;
    }

    // Add business logic below. (Right-click in editor and choose
    // "Insert Code > Add Business Method")
    
    
    
    
}
