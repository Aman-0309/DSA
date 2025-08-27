#include <stdio.h>

int main () {
//<<<<<<<<<<<<< insertion at the Beginning.. >>>>>>>>>>>>>>>>

  printf("\n Let's Insert an element at the beginning of an array \n");
      int arr [100] , num , size;
       printf (" \n Enter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }
     
       printf("Enter the number you want to insert at begnning : ");
       scanf("%d" , &num);

       // shifting the array into right 
       for(int i=size; i>0; i--){
         arr[i] = arr[i-1];
        }
        arr[0] = num;
        size++; // new size after inserion

       // printing the array..
       printf("\n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }





//<<<<<<<<<<<<<<<<<<<<<<<< insertion at the end >>>>>>>>>>>>>>>>>>>>>>>>>
   printf("\n Let's Insert an element at the end of an array \n");
      int arr [100] , num , size;
       printf ("\n Enter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }
     
       printf("Enter the number you want to insert at end : ");
       scanf("%d" , &num);

        arr[size] = num;
        size++; // new size after inserion

       // printing the array..
       printf("\n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }

// <<<<<<<<<<<<<<<<<< insertion at ith position of an array..>>>>>>>>>>>>>>>>

  printf("\n Let's Insert an element at ith position of an array \n");
      int arr [100] , num , size , position ,i;
       printf ("\n Enter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }
       printf("Enter the position at which you want to add element : ");
       scanf("%d" , &position);
     
       printf("Enter the number you want to insert : ");
       scanf("%d" , &num);

       // shifting the array into right 
       for(int i=size; i>=(position-1); i--){
         arr[i] = arr[i-1];
        }
        arr[position - 1] = num;
        size++; // new size after inserion

       // printing the array..
       printf("\n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }
}