#include <stdio.h>

int main() {
    int a[4] = {9, 7, 5, 8};

    // 冒泡排序
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // 交换 a[j] 和 a[j + 1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("排序后的数组: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
