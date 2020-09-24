#include <stdio.h>
// 큐의 생성
#define QUEUE_SIZE 5
typedef int element;
element queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

// 큐의 삽입 연산
void Add_q(int* rear, element item) {
	if (*rear == QUEUE_SIZE - 1) {
		printf("Queue is full !! \n");
		return;
	}
	queue[++(*rear)] = item;
	return;
}

// 큐의 삭제 연산
element Delete_q(int* front, int rear) {
	if (*front == rear) {
		printf("Queue is empty \n");
		return;
	}
	return (queue[++(*front)]);
}
