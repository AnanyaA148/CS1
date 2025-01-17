#include <stdio.h>

int x; // static memory
int *p1; // static memory
int *p2 = (int*) malloc(sizeof(int));

p1 = &x;
*p1 = 30;
*p2 = *p1 +10;

free(p1); // won't wokr because it is only pointing to an int
p1 = p2;
free(p1); // will work because now holds a dynamically allocated array
*p2 = 20; // wont work because p1 was freed and since p1 =p2, p2 was also freed so now there is a segmentation fault
free(p2); // double free error or memory corruption error 


void displayArray




  

