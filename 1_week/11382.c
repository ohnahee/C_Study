#include <stdio.h>

// int 자료형의 범위 초과로 long long 으로 선언해준다

int main() {

  long long a, b, c;
    
    scanf("%lld %lld %lld", &a, &b, &c);
    
    printf("%lld", a + b + c);

    return 0;
}