#include <stdio.h>
int main(){
float p , r , t , SI , TA;
printf("Enter the value of p\n");
scanf("%f" , &p);
printf("Enter the value of r\n");
scanf("%f" , &r);
printf("Enter the value of t\n");
scanf("%f" , &t);
SI = ((p*r*t)/100);
TA = SI + p;
printf("The simple interest is %f\n" ,SI);
printf("The total amount is %f\n" ,TA);
 return 0;
}