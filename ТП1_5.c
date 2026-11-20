//#include <stdio.h>
//
//static int perfect_square(unsigned long long n) {
//    unsigned long long lo = 0, hi = 4294967296;
//    while (lo <= hi) {
//        unsigned long long mid = lo + (hi - lo) / 2;
//        unsigned long long sq = mid * mid;
//        if (sq == n) return 1;
//        if (sq < n) lo = mid + 1;
//        else        hi = mid - 1;
//    }
//    return 0;
//}
//
//int main(void) {
//
//    int N = 0;
//    unsigned long long arr[20];
//
//    scanf_s("%d", &N);
//    for (int i = 0; i < N; i++) scanf_s("%llu", &arr[i]);
//    
//    int  index = 0;
//    unsigned long long max = 0;
//    for (int i = 0; i < N; i++) {
//        if (perfect_square(arr[i]) && arr[i] > max) {
//            max = arr[i];
//            index = i;
//        }
//    }
//
//    if (max != 0) {
//        printf("%d", index); return 0;
//    }
//    else {
//        char f = 0;
//        max = 1;
//        for (int i = 0; i < N; i++) {
//            if (arr[i] == 0 && arr[i] < max) {
//                max = arr[i];
//                index = i;
//                f = 1;
//            }
//        }
//        if (f == 1)printf("%d", index);
//        else printf("-1");
//    }
//
//    return 0;
//}