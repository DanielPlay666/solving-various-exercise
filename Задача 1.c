//#include <stdio.h>
//
//void prime_factors(int n, int d) {
//    if (n == 1) {
//        return;
//    }
//
//    if (d * d > n) {
//        printf("%d ", n);
//        return;
//    }
//
//    if (n % d == 0) {
//        printf("%d ", d);
//        prime_factors(n / d, d);
//    }
//    else {
//        prime_factors(n, d + 1);
//    }
//}
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    prime_factors(n, 2);
//
//    return 0;
//}