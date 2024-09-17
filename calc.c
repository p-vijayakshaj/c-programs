#include<stdio.h>
#include<math.h>

void main()
{
int a,b,n,x;
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("\nfor addition type 1");
printf("\nfor subtraction type 2");
printf("\nfor multiplication type 3");
printf("\nfor division type 4");
scanf("%d",&n);
switch (n)
{
   case 1: x=a+b;
            printf("sum is %d ",x);
            break;
   case 2: x=a-b;
            printf("difference is %d ",x);
            break;
   case 3: x=a*b;
            printf("product  is %d ",x);
            break;
   case 4: x=a/b;
            printf("division is %d  ",x);
            break;
    default : printf("operation not found");


}


}
