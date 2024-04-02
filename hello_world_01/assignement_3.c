//##########################################################
//############    Author: Abdullah Elmasry   ###############
//############    date: 2024/4/2            ###############
//############    version: 1.00              ###############
//##########################################################

#include <stdio.h>

//###########################################################################
//#############################  Assignement 3  #############################
//###########################################################################

//#############################  start of the problem 1  ####################

void input_output_string(){
    printf("Enter the string you want to display: ");
    char user_input[99];
    scanf(" %[^\n]",user_input);

    printf("You entered: %s",user_input);
}

//#############################  end of the problem 1  ######################



//#############################  start of the problem 2  ####################

void serparating_characters(){
    printf("Enter the string you want to separate: ");
    char user_input[100];
    scanf(" %[^\n]",user_input);

    printf("Individual characters: ");

    for(int i=0; user_input[i] != '\0';i++){
        printf("\"%c",user_input[i]);
    }
    printf("\"");

}

//#############################  end of the problem 2  ######################



//#############################  start of the problem 3  ####################

void comparing_strings(){
    char str1[99];
    char str2[99];
    int flag = 1;

    printf("Enter the first string: ");
    scanf("%s",str1);

    printf("Enter the second string: ");
    scanf("%s",str2);

    for(int i=1;(str1[i] != '\0' || str2[i] != '\0' );i++){ // we started iteration from index one because the format that scanf use to store the string has a space at index zero so the compiler considering it as a NULL
        if(str1[i] != str2[i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("The two strings are equal");
    }
    else{
        printf("The two strings you entered are not the same!");
    }
}

//#############################  end of the problem 3  ######################




//#############################  start of the main loop  ####################
void main(){
    
    // input_output_string();
    // serparating_characters();
    comparing_strings();

}
//#############################  end of the main loop  #######################
