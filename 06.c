#include <stdio.h>
int main()
{
    int a,b,c;

    for(a=100; a>=10; a=a-5){
        printf("%d ",a);
    }

    b=0;
    while(b>=0){
        printf("%d ",b);
        b=b+6;
    }

    do{
        printf("* ");
        c=c+4;
    }while(c<100);
    
    return 0;
}