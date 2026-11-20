//#include<stdio.h>
//
//int main() {
//	int n = 0, arr[10000], S = 0;
//
//    if (scanf("%d", &n) != 1) { printf("notfound"); return 0; }
//	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
//	scanf("%d", &S);
//    int lo = 0, hi = n-1;
//
//    int dir = 0;
//    if (n <= 1 || arr[0] <= arr[n - 1]) {
//        dir = 1;
//    }
//    else dir = -1;
//
//    while (lo <= hi) {
//        int mid = lo + (hi - lo) / 2;
//        int v = arr[mid];
//        if (v==S) { printf("%d", mid); return 0; }
//        int go_right = 0;
//        if (dir == 1) go_right = (S > v);
//        else go_right = (S < v);
//        if (go_right) lo = mid + 1;
//        else hi = mid - 1;
//    }
//    printf("notfound");
//	return 0;
//}