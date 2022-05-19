#include <stdio.h>

int main() {
    int n,i,num1=0,num2=1,num3;
    scanf("%d",&n);

    for(i=1;i<n;i++)

{ printf("%d ",num1);
    num3= num1+num2;
    num1=num2;
    num2=num3;
}
    printf("%d\n",num1);





    return 0;
}
