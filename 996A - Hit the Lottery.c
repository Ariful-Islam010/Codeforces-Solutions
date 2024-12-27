#include<stdio.h>
int main() {
    long long int n, minimum_bills = 0;
    scanf("%lld", &n);
    minimum_bills+=n/100;
    n%=100;
    minimum_bills+=n/20;
    n%=20;
    minimum_bills+=n/10;
    n%=10;
    minimum_bills+=n/5;
    n%=5;
    minimum_bills+=n;
    printf("%lld\n", minimum_bills);
    return 0;
}
