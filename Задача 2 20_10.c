//#include<stdio.h>
//
//int reverse(int* arr, int start, int end) {
//	while (start < end) {
//		int tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//	return 0;
//}
//
//int shift(int *arr,int size,int how_much) {
//	if (size <= 0) return 0;
//	how_much %= size;
//	if (how_much == 0) return 0;
//
//	reverse(arr, 0, how_much - 1);
//	reverse(arr, how_much, size - 1);
//	reverse(arr, 0, size - 1);
//	return 0;
//}
//
//int print_arr(int *arr,int size) {
//	for (int i = 0; i < size; i++)printf("%d ", arr[i]);
//	return 0;
//}
//
//int main() {
//	int arr[100], size = 0, how_much = 0;
//	char direct;
//
//	scanf_s("%d", &size);
//	for (int i = 0; i < size; i++) scanf_s("%d", &arr[i]);
//	scanf_s(" %c", &direct,1);
//	scanf_s("%d", &how_much);
//	if (how_much == 0) { print_arr(arr, size); return 0; }
//	if (direct == 'l')shift(arr,size,how_much);
//	else shift(arr, size, size-how_much);
//	print_arr(arr, size);
//	return 0;
//}