//##########################################################
//############    Author: Abdullah Elmasry   ###############
//############    date: 2024/3/23            ###############
//############    version: 1.00              ###############
//##########################################################

#include <stdio.h>

//###########################################################################
//#############################  Assignement 1  #############################
//###########################################################################

//#############################  start of the problem 1  ####################

void counting_duplicates(int numbers[], int size){

    // sorting numbers
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(numbers[i] > numbers[j]){
                int temporary = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temporary;
            }
        }
    }
    // end of sorting

    int counter = 0; // initializing the counter

    for(int u=0;u<size;u++){
        if(numbers[u] == numbers[u-1]){ // comparing condition to catch the duplicates elements
            counter++;
        }   
    }
    
    printf("%d",counter);

}

//#############################  end of the problem 1  ######################



//#############################  start of the problem 2  ####################


void printint_unique(int numbers[], int size){
    
    int myNumbers[size];

    // copying numbers to myNumbers
    for (int i = 0; i < size; i++) {
        myNumbers[i] = numbers[i];
    }

    // sorting numbers
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(myNumbers[i] > myNumbers[j]){
                int temp = myNumbers[i];
                myNumbers[i] = myNumbers[j];
                myNumbers[j] = temp;
            }
        }
    }
    // end of sorting

    // printing sorted array
    for(int x=0;x<size;x++){
        printf("%d\n",myNumbers[x]);
    }
    printf("################################\n");

    // printing element zero
    printf("%d\n",myNumbers[0]);

    for(int u=1;u<size;u++){
        if(myNumbers[u] != myNumbers[u-1]){
            printf("%d\n",myNumbers[u]); // printing unique elements
        }   
    }
}

//#############################  end of the problem 2  ####################



//#############################  start of the problem 3  ##################

void element_frequency(int numbers[], int size){

    // sorting numbers
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(numbers[i] > numbers[j]){
                int temporary = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temporary;
            }
        }
    }
    // end of sorting


    int counter = 1;
    // looping to find the duplicates elements
    for(int u=0;u<size;u++){
        if(numbers[u+1] == numbers[u]){
            counter++;
        }
        else{
            if(counter == 1){ // if the elements appeared one time 
                printf("the number: %d appeared %d time \n",numbers[u],counter);
            }
            else{ // if appeared more than once
                printf("the number: %d appeared %d time \n",numbers[u-1],counter);
            }
            counter = 1; // reseting the counter
        }
    }
}

//#############################  end of the problem 3  ####################



//#############################  start of the problem 4  ##################

void add_call_by_reference(int *num1,int *num2){

    int sum = *num1 + *num2; // adding the numbers
    printf("the summition is: %d\n",sum); // printing the summition

}

//#############################  end of the problem 4  ####################





//#############################  start of the main loop  ##################
void main(){
    
    int numbers[] = {1,4,7,12,5,1,4,8,9,10,1,3,7};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int num1 = 10;
    int num2 = 5;


    //#######  unlock the desired function to play  #######
    // counting_duplicates(numbers,size);
    // printint_unique(numbers,size);
    // element_frequency(numbers,size);
    // add_call_by_reference(&num1,&num2);

}
//#############################  end of the main loop  ####################
