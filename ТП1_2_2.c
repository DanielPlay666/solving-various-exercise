//#include <stdio.h>
//void convert_base(unsigned long long num, int base, char* buffer) {
//    char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
//    int i = 0;
//
//    if (num == 0) {
//        buffer[i++] = '0';
//        buffer[i] = '\0';
//        return;
//    }
//
//    while (num > 0) {
//        buffer[i++] = digits[num % base];
//        num /= base;
//    }
//    buffer[i] = '\0';
//
//    for (int j = 0; j < i / 2; j++) {
//        char temp = buffer[j];
//        buffer[j] = buffer[i - 1 - j];
//        buffer[i - 1 - j] = temp;
//    }
//}
//
//void print_variable(const char* type_name, long long value, char is_unsigned, int base) {
//    char hex[100];
//    char res[100];
//
//    int minus = (!is_unsigned && value < 0);
//
//    unsigned long long abs_val;
//    if (minus) {
//        abs_val = -value;
//    }
//    else {
//        abs_val = (unsigned long long)value;
//    }
//
//    convert_base(abs_val, 16, hex);
//    convert_base(abs_val, base, res);
//
//    if (minus) {
//        printf("%s;-%s=-%s;%d\n", type_name, hex, res, base);
//    }
//    else {
//        printf("%s;%s=%s;%d\n", type_name, hex, res, base);
//    }
//}
//
//int main() {
//    short v_short = 32767;
//    int v_int = 1723517652;
//    unsigned int v_uint = 4010079328;
//    long v_long = -793066464;
//    unsigned long v_ulong = 509410490;
//
//    print_variable("short", v_short, 0, 13);
//    print_variable("int", v_int, 0, 18);
//    print_variable("unsigned int", v_uint, 1, 14);
//    print_variable("long", v_long, 0, 31);
//    print_variable("unsigned long", v_ulong, 1, 24);
//
//    return 0;
//}