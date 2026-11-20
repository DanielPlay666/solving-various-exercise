//#include <stdio.h>
//int find_max(char* num_1, char* num_2,char n) {
//	if (n == 6)return 0;
//	if (num_1[n] == num_2[n])find_max(num_1, num_2, n + 1);
//	else if (num_1[n] > num_2[n]) return 0;
//	else return 1;
//}
//
//void subtraction(char* num_1, char* num_2, char* result) {
//	for (char i = 5; i >= 0; i--) {
//		if (num_1[i] < num_2[i]) {
//			num_1[i - 1] -= 1;
//			result[i] = num_1[i] + 10 - num_2[i];
//		}
//		else if (num_1[i] == num_2[i])result[i] = 0;
//		else result[i] = num_1[i] - num_2[i];
//	}
//
//}
//
//int main(void) {
//	char s[16], num_1[6], num_2[6],result[6];
//	scanf("%s", &s,16);
//	char i = 0;
//	while (i < 15) {
//		if (i < 2)num_1[i] = s[i]-'0';
//		if (i > 2 && i < 7)num_1[i - 1] = s[i] - '0';
//		if (i > 7 && i < 10)num_2[i - 8] = s[i]-'0';
//		if (i > 10)num_2[i - 9] = s[i] - '0';
//		i++;
//	}
//	char f = 0;
//	if (find_max(num_1, num_2, 0)) {
//		subtraction(num_2, num_1, result); f = 1;
//	}
//	else subtraction(num_1, num_2, result);
//	int sum = 0;
//	for (char i = 0; i < 6; i++)sum += result[i];
//	if (sum == 0) {
//		printf("0"); return 0;
//	}
//	else if (f) {
//		printf("-");
//	}
//	if (result[0] == 0)i = 1;
//	else i = 0;
//	int k = 5;
//	while (result[k] == 0)k--;
//	for (char j = i; j <= k; j++) {
//		if (j == 2)printf(".");
//		printf("%d", result[j]);
//	}
//
//	return 0;
//}