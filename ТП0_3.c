//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//    if (n < 0) n = -n;
//    int len = 0;
//    int t = n;
//    do {
//        len++;
//        t /= 10;
//    } while (t > 0);
//    if (len % 2 != 0) {
//        printf("0");
//        return 0;
//    }
//    int half = len / 2;
//    int div = 1;
//    for (int i = 0; i < half; i++) {
//        div *= 10;
//    }
//    int left = n / div;
//    int right = n % div;
//    int sum_left = 0, sum_right = 0;
//    for (int i = 0; i < half; i++) {
//        sum_left += left % 10;
//        left /= 10;
//        sum_right += right % 10;
//        right /= 10;
//    }
//    if (sum_left == sum_right) printf("1");
//    else printf("0");
//
//    return 0;
//}