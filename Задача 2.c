//#include <stdio.h>
//int sign_plus_1(int *sign,int n) {
//	sign[0] += 1;
//	for (int i = 0; i < n - 1; i++) {
//		if (sign[i] == 2) {
//			sign[i] = 0;
//			sign[i + 1] += 1;
//		}
//	}
//	return 0;
//}
//
//int find_sign(int *arr,int *sign,int n,int s) {
//	int sum = arr[0];
//	for (int i = 0; i < n-1; i++) {
//		if (sign[i] == 0) sum += arr[i+1];
//		else sum -= arr[i+1];
//	}
//	if (sum == s) return 0;
//	else { sign_plus_1(sign, n); find_sign(arr, sign,n,s); }
//}
//
//int main() {
//	int n = 0, numbers[25], sum = 0, sign[24];
//
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) scanf_s("%d", &numbers[i]);
//	for (int i = 0; i < n - 1; i++) sign[i] = 0;
//	scanf_s("%d", &sum);
//
//	find_sign(numbers, sign, n,sum);
//	printf("%d", numbers[0]);
//	for (int i = 0; i < n-1; i++) {
//		if (sign[i] == 0) printf("+");
//		else printf("-");
//		printf("%d", numbers[i+1]);
//	}
//	printf("\n");
//	return 0;
//}