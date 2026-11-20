#include <stdio.h>

int main(void) {
    int N, j, k;
    int len_1 = 0, len_2 = 0, max_len = 0, overlap, ok;
    char word_1[32], word_2[32];

    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%s %s", word_1, word_2);

        while (word_1[len_1] != '\0') len_1++;
        while (word_2[len_2] != '\0') len_2++;

        overlap = 0;
        lim = (la < lb) ? la : lb;

        for (k = 1; k <= lim; ++k) {
            ok = 1;
            for (j = 0; j < k; ++j) {
                if (a[la - k + j] != b[j]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) overlap = k;
        }

        for (j = 0; j < la; ++j) {
            putchar(a[j]);
        }
        for (j = overlap; j < lb; ++j) {
            putchar(b[j]);
        }
        putchar('\n');
    }

    return 0;
}