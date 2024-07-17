#include<stdio.h>
int main()
{
int x,y,z;
float k;
printf("ENTER THE VALUE OF X:");
scanf("%d",&x);
printf("ENTER THE VALUE OF Y:");
scanf("%d",&y);
printf("ENTER THE VALUE OF Z:");
scanf("%d",&z);
k=x+y*z/4%2-1;
printf("%f",k);
return 0;
}
