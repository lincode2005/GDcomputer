#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct Student)

struct Student {
    int num;
    struct Student *next;
};

int main() {
    struct Student *head, *p;
    
    // 创建第一个节点
    head = (struct Student *)malloc(LEN);
    head->num = 1;
    
    // 创建第二个节点
    p = (struct Student *)malloc(LEN);
    p->num = 2;
    head->next = p;  // 第一个节点指向第二个节点
    
    // 创建第三个节点
    p->next = (struct Student *)malloc(LEN);
    p = p->next; 
    p->num = 3;
    
    // 创建第四个节点
    p->next = (struct Student *)malloc(LEN);
    p = p->next;
    p->num = 4;
    p->next = NULL;  // 最后一个节点的next设为NULL
    
    // 遍历链表并输出
    p = head;
    while (p != NULL) {
        printf("%d\n", p->num);
        p = p->next;
    }
    
    // 释放内存（可选，程序结束时会自动释放）
    struct Student *temp;
    p = head;
    while (p != NULL) {
        temp = p;
        p = p->next;
        free(temp);
    }
    
    return 0;
}