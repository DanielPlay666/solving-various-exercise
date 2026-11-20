//#include <stdio.h>
//
//int main() {
//    unsigned long max = 0-1;
//    unsigned long base = 0;
//    unsigned long prev_base = 0;
//    while (1) {
//        unsigned long result = 1;
//        int over = 0;
//        for (int i = 0; i < 7; i++) {
//            if (base > 0 && result > max / base) {
//                over= 1;
//                break;
//            }
//            if (base == 0 && i == 0) {
//                result = 0;
//                break;
//            }
//            result *= base;
//        }
//        if (over) {
//            break;
//        }
//        printf("%lu\n", result);
//        prev_base = base;
//        base++;
//        if (base < prev_base) {
//            break;
//        }
//    }
//
//    return 0;
//}