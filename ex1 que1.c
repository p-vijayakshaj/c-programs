#include<stdio.h>
void main(){
int mp,nh,rph,nwm;
printf("enter no of hours worked in week ");
scanf("%d",&nh);
printf("\nenter rate per hour");
scanf("%d",&rph);
printf("\nenter no of weeks in months");
scanf("%d",&nwm);
mp=nh*rph*nwm;
printf("\nmontly pay is %d",mp);


}
