#include <stdio.h>

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x);

int main() {
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};
    int x[5];
    int vx = KnapsackBT(w, v, n, wx, 0, x);
    printf("Value = %d \n", vx);
    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);
    return 0;
}

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    if (i == n) {
        int sumValue = 0;
        for (int j = 0; j < n; j++) {
            sumValue += x[j] * v[j];
        }
        return sumValue;
    }
    x[i] = 1;
    int valueWithItem = 0;
    if (w[i] <= wx) {
        valueWithItem = KnapsackBT(w, v, n, wx - w[i], i + 1, x);
    }
    x[i] = 0;
    int valueWithoutItem = KnapsackBT(w, v, n, wx, i + 1, x);

    if (valueWithItem > valueWithoutItem) {
        x[i] = 1;
        return valueWithItem;
    } else {
        x[i] = 0;
        return valueWithoutItem;
    }
}

