#include <stdio.h>
// C언어에서는 bool형이 없기때문에 단순하게 true, false를 정의하였음
#define true 1
#define false 0

//스택의 생성
#define STACK_SIZE 100
int stack[STACK_SIZE];
int top = -1;

// 빈 스택 
int IsEmpty() {
    if (top < 0)
        return true;
    else
        return false;
}
// 가득찬 스택
int IsFull() {
    if (top >= STACK_SIZE - 1)
        return true;
    else
        return false;
}
// 스택 삽입
void push(int value) {
    if (IsFull() == true)
        printf("스택이 가득 찼습니다.");
    else
        stack[++top] = value;
}
// 스택 삭제
int pop() {
    if (IsEmpty() == true)
        printf("스택이 비었습니다.");
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

