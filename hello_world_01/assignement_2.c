//##########################################################
//############    Author: Abdullah Elmasry   ###############
//############    date: 2024/3/25            ###############
//############    version: 1.00              ###############
//##########################################################

#include <stdio.h>

//###########################################################################
//#############################  Assignement 2  #############################
//###########################################################################

//#############################  start of the problem 1  ####################

void operations(){
    // initializign the three vars
    int x = 1;
    int y = 2;
    int z = 3;
    // initializing the three pointers
    int *p;
    int *q;
    int *r;
    // setting addresses of the three vars to the three pointers
    p = &x;
    q = &y;
    r = &z;

    // printing with lables
    printf("the integers \nx=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n",x,y,z,p,q,r);
    printf("--------------------------\n");
    printf("now the pointers \n*p=%p\n*q=%p\n*r=%p\n",(void*)p,(void*)q,(void*)r);

    printf("--------------------------\n");
    printf("swapping pointers!\n");

    // the swapping line of code
    r = p , p = q , q = r;

    printf("repeating the first step of printing again\n");
    // printing with lables again
    printf("the integers \nx=%d\ny=%d\nz=%d\np=%d\nq=%d\nr=%d\n",x,y,z,p,q,r);
    printf("--------------------------\n");
    printf("now the pointers \n*p=%p\n*q=%p\n*r=%p",(void*)p,(void*)q,(void*)r);




}

//#############################  end of the problem 1  ######################




//#############################  start of the main loop  ####################
void main(){
    
    operations();

}
//#############################  end of the main loop  #######################
