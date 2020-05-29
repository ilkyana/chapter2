#include<stdio.h>
void main(){

int d1,d2,d3,d4,d5,rev;
    int num;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    d1=(num%10);
    d2=(num%100)/10;
    d3=(num%1000)/100;
    d4=(num%10000)/1000;
    d5=num/10000;
    rev = d1*10000+d2*1000+d3*100+d4*10+d5;
	printf("The reverse number is %d" , rev);
if(rev==num){
printf("The value are equal");
}else{
printf("The value are not equal");
}
}
