#include <stdio.h>

int power(int base, int n){
    if (n==0)
        return 1;
    return power(base, n-1)*base;
}

int main(){
    int res,base,a;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(should be a positive integer): ");
    scanf("%d", &a);
    res  = power(base, a);
    printf("%d ", res);
    return 0;
}
