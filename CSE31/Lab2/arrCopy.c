#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void printArr(int *a, int size, char *name){
    
   // printf("Original array's contents: ");
    for (int i = 0; i < size; ++i) {
        printf(" %d", *(a + i ));
    }
    printf("\n");
}

int* arrCopy(int *a, int size){
    printf("Copied array's contents: ");
    int *copy = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        *(copy + i) = *(a + i);
    }
    return copy;
}

int main(){
    int n;
    int *arr; // declare a pointer variable to point to allocated heap space
    int *arr_copy;
    int i;
    
    printf("Enter the size of array you wish to create: ");
    scanf("%d", &n);
 
    //Dynamically create an int array of n items
    arr =(int *) malloc (sizeof (int) * n);

    //Ask user to input content of array
    
for(int i=0; i<n;i++){
        printf("Enter array element #%d: ",i+1);
        scanf("%d",arr+i);
    }
  printf("Original array's contents: ");

/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array
    arr_copy = arrCopy(arr, n);

	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}