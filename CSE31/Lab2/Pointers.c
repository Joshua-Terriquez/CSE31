#include <stdio.h>

int main() {



    int x=0, y=0, *px, *py;
    int arr[10]={0}; // all elements = to zero.
 px=&x;
 py=&y;
printf("\nCurrent Value of x= %d\n",x); // shows current value of x   
printf("Address of x: %p\n\n",&x); //displays address of x ---(&) means "address of"

printf("Current Value of y= %d\n",y); // shows current value of y
printf("Address of y: %p\n\n",&y);  //displays address of y

printf("Value of Pointer py= %d\n",*py);// displays value of pointer py
printf("Addres of pointer py: %p\n\n",py);// displays address of pointer py

printf("Value of Pointer px= %d\n",*px); // displays value of point px
printf("Address of pointer px: %p\n\n",px); // displays adress of pointer px

for(int i=0;i<10;i++){
printf ("%d\n",*(arr+i));  // prints 10 values of arr
}
printf("address of arr: %p\n",arr); // arrays always point to the address of its first elementarr[0]
printf("address of arr: %p\n",arr+0);
return 0;
}
