#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    while(scanf("%d",&i) && i!=42)
        printf("%d\n",i);
    return 0;

}

