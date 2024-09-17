//big in three numbers
#include<stdio.h>
void main(){
int a,b,c,big;
printf("enter a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
big=a;
else
if(b>c)
big=b;
else
big=c;
printf("big is %d",big);
}
