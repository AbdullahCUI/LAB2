/**
 * Author:  Abdullah
 * 
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

 double area,base,height;

 //user printf function for to show output on console

 printf("Please enter Base of the triangle:");

 //scanf for to read a value 

 scanf("%f", &base);

 printf("Please Enter Height of the Triangle:");

 scanf("%f", & height);

 //formula of area culculating

 area=1.0/2* base *height;
}
