//##########################################################
//############    Author: Abdullah Elmasry   ###############
//############    date: 2024/4/7             ###############
//############    version: 1.00              ###############
//##########################################################

#include <stdio.h>

//###########################################################################
//#############################  Assignement 2  #############################
//###########################################################################

//#############################  start of the problem 1  ####################

void adding_by_pointer(int *num1,int *num2){ // passing values to this function using pointers

    int z = *num1 + *num2; // dereferencing the two pointers and then adding the values 

    printf("the result of adding = %d",z);
}

//#############################  end of the problem 1  ######################



//#############################  start of the problem 2  ####################

void array_elements_using_pointers(){
    int arr[50] = {10,9,5,8,2,4,6,9};

    int *ptr = arr; // this pointer points at the address of the array's first element

    for(int i=0;arr[i] !='\0';i++){ // keep looping till found a NULL value
        printf("%d ",*ptr);
        ptr++; // incrementing the address to point at the next element to print it
    }
}

//#############################  end of the problem 2  ######################



//#############################  start of the problem 3  ####################



//#############################  end of the problem 3  ######################




//#############################  start of the main loop  ##################
void main(){
    int x = 10;
    int y = 20;
    // adding_by_pointer(&x,&y);
    array_elements_using_pointers();


}
//#############################  end of the main loop  ####################
