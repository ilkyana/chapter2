#include<stdio.h>
void main(){
int cp,sp;
printf("Enter the cp and sp\n");
scanf("%d%d",&cp,&sp);
int profit = sp-cp;
int loss = cp-sp;
if(cp<sp){
printf("you have profit of rs: %d",profit );
} else{
printf("You have loss of rs: %d" , loss);
}

}
