#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char op;
    int n,a1,a2,b1,b2;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf(" %c %d %d %d %d",&op,&a1,&a2,&b1,&b2);
        if(op=='+')
        printf("%d %d\n",a1+b1,a2+b2);
        else if(op=='-')
        printf("%d %d\n",a1-b1,a2-b2);
        else if(op=='*')
        printf("%d %d\n",a1*b1-a2*b2,a1*b2+a2*b1);
    }
    
	return 0;
}