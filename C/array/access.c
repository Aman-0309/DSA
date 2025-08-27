#include <stdio.h>

int main(){

// <<<<<<<<<<<<<<<<<< Access the elements of an array >>>>>>>>>>>>>

 int arr[100] , i , size , pos ;
 printf("Enter the size of the array : ");
 scanf("%d" , &size);
 
 printf("Enter the elements of the array : ");
 for(int i=0; i<size; i++){
     scanf("%d" , &arr[i]);
    }
    
printf("Enter the positon you want to access : ");
 scanf ("%d" , &pos);

 printf("The element is : ");
 for(i=0; i<size; i++){
    if(arr[i] == pos){
        printf("%d" , arr[i]);
    }
 }


// <<<<<<<<<<<<<<<<<< Update the elements of an array >>>>>>>>>>>>>


 int arr[100] , i , size , pos,num;
 printf("Enter the size of the array : ");
 scanf("%d" , &size);

 //input the array
 printf("Enter the elements of the array : ");
 for(int i=0; i<size; i++){
     scanf("%d" , &arr[i]);
    }
    
printf("Enter the positon you want to update : ");
 scanf ("%d" , &pos);

 printf("Enter the number you want to update : ");
 scanf ("%d" , &num);


arr[pos - 1] = num; // update the value

//print new array 
 printf("The updated array is : ");
 for(i=0; i<size; i++){
    printf("%d ", arr[i]);
 }

}