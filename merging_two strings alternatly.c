#include<stdio.h>
int count(int n);
int main(void){
    int i;
    for(i = 1;i<1000;i++){
        int n,c,sum;
        c = count(i);
        sum = 0;
        n = i;
        while(n>0){
            sum += (int)pow(n%10,c);
            n /= 10;
        }
        if(i == sum)
        printf("%d",i);
    }
    return 0;
}

int count(int n){
    int c = 0;
    while(n%10 != 0){
        c++;
        n /= 10;
    }
    return c;
}
