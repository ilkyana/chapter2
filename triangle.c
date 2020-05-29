#include<stdio.h>
void main(){
int a,b,c;
printf("Enter the sides of triangle");
scanf("%d%d%d",&a,&b,&c);
if((a+b+c)==180){
printf("Triangle is valid");
} else{
printf("Triangle is not valid");
}
}
