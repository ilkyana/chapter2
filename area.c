#include<stdio.h>
void main(){

int len,bre;
int ar , per ;
printf("Enter the length");
scanf("%d",&len);
printf("Enter the breadth\n");
scanf("%d",&bre);
 ar = len*bre;
 per = 2*(len+bre);
if(ar>per){
printf("Area is greater then the perameter");
} else {
printf("Area is not greater than the perameter");
}
}
