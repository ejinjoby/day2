#include<stdio.h>
int main()
{
int x=10,y=20,n;
printf(" enter the value of n");
scanf("%d",&n);
switch(n)
{


case 1:
    if(x<y){
    printf("TRUE");
    }
    else{
    printf("FALSE");
    }
    break;

    case 2:
    if(x>y){
    printf("TRUE");
    }
    else{
    printf("FALSE");
    }
    break;

    case 3:
    if(x<=y){
    printf("TRUE");
    }
    else{
    printf("FALSE");
    }
    break;

    case 4:
    if((x*x-y)>(y*y-x)){
    printf("TRUE");
    }
    else{
    printf("FALSE");
    }
    break;

    case 5:
    if((x*x*x)<(y*x*x)){
    printf("TRUE");

    }
    else{
    printf("FALSE");
    }

    break;
    case 6:
    if(((x*y)!=(y*x))){
    printf("TRUE");

    }
    else{
    printf("FALSE");
    }
    break;

    case 7:
    if(((x*y)==(y*x))){
    printf("TRUE");

    }
    else{
    printf("FALSE");
    }
    break;

}

return 0;

}
