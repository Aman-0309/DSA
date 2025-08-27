#include <stdio.h>

int main(){

 // <<<<<<<<<<<<<< deletion from beginning >>>>>>>>>>>>
   printf(" \n Let's delete an element from the beginning of an array \n");
       int arr [100] , num , size;
       printf (" \nEnter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }
       // shifting the array into left 
       for(int i=0; i<(size-1); i++){
            arr[i] = arr[i + 1];
          }
         size-- ;   // updating the size

       // printing the array..
       printf(" \n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }




 // <<<<<<<<<<<<<< deletion from end >>>>>>>>>>>>
    printf("\n Let's delete an element from the end of an array \n");
      int arr [100] , num , size;
       printf (" \nEnter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }

         size-- ;   // updating the size this will automatically delete the last element

       // printing the array..
       printf("\n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }



// <<<<<<<<<<<<<< deletion from ith position >>>>>>>>>>>>
  printf(" \n Let's delete an element from the ith position of an array \n");
      int arr [100] , num , size , pos;
       printf (" \nEnter the size of the array : ");
       scanf ("%d", &size);

       // input the array
       printf("Enter the elements of array : ");
       for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
       }
    printf("\nEnter position to delete : ");
    scanf("%d", &pos);

    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
    } else {
        for (int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];   // shift left
        }
        size--;

       // printing the array..
       printf(" \n The new array is : ");
       for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
       }
}
}