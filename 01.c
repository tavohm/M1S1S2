#include <stdio.h>
int main(){
    int a,b;
    for(a=1; a<=2; a=a+1){
        for(b=1; b<=10; b=b+1){
            printf("%d x %d = %d\n",a,b,a*b);
        }
        printf("\n");
    }
    return 0;
}
