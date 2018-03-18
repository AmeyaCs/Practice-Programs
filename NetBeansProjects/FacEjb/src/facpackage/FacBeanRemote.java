/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package facpackage;

import javax.ejb.Remote;

/**
 *
 * @author Alisha
 */
@Remote
public interface FacBeanRemote {

    int factorial(int num);
    
}
