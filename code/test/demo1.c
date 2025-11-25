#include <stdio.h>

int main() {
    int rows = 10;
    int triangle[10][10];
    int i, j;
    
    // 初始化杨辉三角形
    for(i = 0; i < rows; i++) {
        // 每行的第一个和最后一个元素都是1
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        
        // 计算中间的元素
        for(j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    
    // 打印杨辉三角形（左对齐）
    for(i = 0; i < rows; i++) {
        // 打印数字
        for(j = 0; j <= i; j++) {
            printf("%d\t", triangle[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

