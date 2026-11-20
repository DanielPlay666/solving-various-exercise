//#include <stdio.h>
//int func(char *s) {
//	int imin = 0, imax = 0;
//	int iminword = 0, imaxword = 0;
//	for (int i = 0; i < 1001; i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
//			imin = i;
//			while ((s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')&&s[i]!='\0') {
//				i++;
//
//			}
//			imax = i-1;
//			if (imaxword - iminword < imax - imin) {
//				imaxword = imax;
//				iminword = imin;
//			}
//		}
//	}
//	for (int i = iminword; i <= imaxword; i++) {
//		printf("%c", s[i]);
//	}
//
//	return 0;
//}
//
//int main() {
//	char s[1001];
//	scanf_s("%1000[^\n]", s,1001);
//	func(s);
//	return 0;
//}