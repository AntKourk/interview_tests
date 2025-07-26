#include <stdio.h>

void checkPrime(int i){
    int check=0;
    if ((i%2==0 && i!=2) || i==1) 
    {
        check++;
    }
    else{
        for (int j = 3; j*j<=i; j+=2)
        {
            if(i%j==0){
                check++;
                break;
            }   
        }
    }
    if (check==0)
    {
        printf("%d ",i);   
    }
}

//PRIME NUMBERS
int main(){
    for (int i=1; i<=100; i++){
        checkPrime(i);
    }
    printf("\n"); 
    return 0;
}