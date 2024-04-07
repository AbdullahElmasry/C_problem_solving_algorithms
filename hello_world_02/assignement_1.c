//##########################################################
//############    Author: Abdullah Elmasry   ###############
//############    date: 2024/4/3             ###############
//############    version: 1.00              ###############
//##########################################################

#include <stdio.h>

//###########################################################################
//#############################  Assignement 1  #############################
//###########################################################################

//#############################  start of the problem 1  ####################

void pointer_arithmetic(){
    int *p1;
    char *p2;
    long long *p3;

    printf("original int: %p\n",(void *)p1);
    printf("original char: %p\n",(void *)p2);
    printf("original long long: %p\n",(void *)p3);

    p1++;
    p2++;
    p3++;

    printf("int after increment: %p\n",(void *)p1);
    printf("char after increment: %p\n",(void *)p2);
    printf("long long after increment: %p\n",(void *)p3);

    printf("we notice that the last number in the memory address is changing which is represents a single byte so for the first pointer type int the memory incremented by 4 bytes that is because the compiler assignes 4 bytes for integers and 1 byte for characters and 8 bytes for long long itegers, this is why we see this change in memory. ");
}

//#############################  end of the problem 1  ######################



//#############################  start of the problem 2  ####################

void hex_increment(){
    int hex_value = 0x11170; // the 3 bytes HEX value which equals 70,000 in decimal
    int *ptr = &hex_value;
    printf("Original ptr: %p\n",ptr);

    *ptr++; // this is post increment to the memory address 
    printf("ptr after *ptr++: %p\n",ptr);
    *ptr = &hex_value; // reseting the value

    *++ptr; // this is pre increment to the memory address
    printf("ptr after *++ptr: %p\n",ptr);
    *ptr = &hex_value; // reseting the value

    // the first two operations will result the same thing because there are noting can be processed while the incremention.

    ++*ptr;
    printf("ptr after ++*ptr: %p\n",ptr);
    printf("ptr after ++*ptr: %d\n",*ptr); // the decimal value will increment by 1 so 70,000 + 1 = 70,001
    
    // this particular operation won't affect the memory address but it will increment the value of the variable itself.
}

//#############################  end of the problem 2  ######################




//#############################  start of the main loop  ##################
void main(){
    
    // pointer_arithmetic();
    hex_increment();

}
//#############################  end of the main loop  ####################
