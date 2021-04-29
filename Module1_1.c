#include<iostream.h>
#include<stdio.h>
int main() {
    int output,number1,number2,number3;
   printf("enter three numbers");
    scanf("%d",&number1);
    scanf("%d",&number2);
    scanf(" %d",&number3);
if ((number1+number2)>number3)
{
 output=1;
}
else {
    output=0;
}
return 0;
}