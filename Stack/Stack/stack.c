#include <stdio.h>
// C������ bool���� ���⶧���� �ܼ��ϰ� true, false�� �����Ͽ���
#define true 1
#define false 0

//������ ����
#define STACK_SIZE 100
int stack[STACK_SIZE];
int top = -1;

// �� ���� 
int IsEmpty() {
    if (top < 0)
        return true;
    else
        return false;
}
// ������ ����
int IsFull() {
    if (top >= STACK_SIZE - 1)
        return true;
    else
        return false;
}
// ���� ����
void push(int value) {
    if (IsFull() == true)
        printf("������ ���� á���ϴ�.");
    else
        stack[++top] = value;
}
// ���� ����
int pop() {
    if (IsEmpty() == true)
        printf("������ ������ϴ�.");
    else
        return stack[top--];
}

int main() {

    push(1);
    push(2);
    push(3);
    printf("%d \n", pop());
    printf("%d \n", pop());
    printf("%d \n", pop());

    return 0;
}

