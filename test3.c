#include <stdio.h>

//FIBONACCI SEQUENSE
int main(){
    int i=0;
    int j=1;
    int temp=0;
    printf("%d ",i);
    printf("%d ",j);
    while (temp<=1000)
    {
        temp=i+j;
        printf("%d ",temp);
        i=j;
        j=temp;
    }
    printf("\n");
    return 0;
}