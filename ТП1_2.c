//#include <stdio.h>
//
//int perevod(long long ten_base, int new_base) {
//    char digits[] = "0123456789abcdefghijklmnopqrstuv", new_num[128];
//    int i = 0, flag = 0;
//    while (ten_base > 0) {
//        new_num[i] = digits[ten_base % new_base];
//        ten_base = ten_base / new_base;
//        i++;
//    }
//    while (i > 0) {
//        i--;
//        printf("%c", new_num[i]);
//    }
//    return 0;
//}
//
//int main(void) {
//    short s = 32767;
//    int i = 1723517652;
//    unsigned int ui = 4010079328;
//    long l = 793066464;
//    unsigned long ul = 509410490;
//
//    printf("short;");
//    perevod(s, 16);
//    printf("=");
//    perevod(s, 13);
//    printf(";13\n");
//
//    printf("int;");
//    perevod(i, 16);
//    printf("=");
//    perevod(i, 18);
//    printf(";18\n");
//
//    printf("unsigned int;");
//    perevod(ui, 16);
//    printf("=");
//    perevod(ui, 14);
//    printf(";14\n");
//
//    printf("long;-");
//    perevod(l, 16);
//    printf("=-");
//    perevod(l, 31);
//    printf(";31\n");
//
//    printf("unsigned long;");
//    perevod(ul, 16);
//    printf("=");
//    perevod(ul, 24);
//    printf(";24\n");
//
//    return 0;
//}