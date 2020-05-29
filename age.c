#include<stdio.h>
void main(){

int ram,shyam,ajay;
printf("Enter the age or ram, shyam and ajay\n");
scanf("%d%d%d",&ram,&shyam,&ajay);
if(ram<shyam&&ram<ajay){
printf("Ram is youngest");
}else if(shyam<ram&&shyam<ajay){
printf("Shyam is youngest");
} else {
printf("Ajay is youngest");
}
}
