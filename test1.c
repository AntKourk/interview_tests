#include <stdio.h>

int checkDiv(int div){
    if(div%3==0 && div%7==0){
        return 3;
    }
    else if(div%7==0){
        return 2;
    }
    else if(div%3==0){
        return 1;
    }
    else {
        return 4;
    }
}

int main(){
    int check;
    for (int i=1; i<=200; i++){
        check=checkDiv(i);
        if(check==3){
            printf("%d/3 && %d/7\n",i, i);
        }
        else if(check==2){
            printf("%d/7\n",i);
        }
        else if(check==1){
            printf("%d/3\n",i);
        }
        check=0;
    }
    return 0;
}