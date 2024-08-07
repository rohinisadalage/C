#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;
Node* newNode(int data) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(Queue* q, int data) {
    Node* temp = newNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}
int dequeue(Queue* q) {
    if (q->front == NULL)
        return -1;
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    int data = temp->data;
    free(temp);
    return data;
}
int isEmpty(Queue* q) {
    return q->front == NULL;
}
int front(Queue* q) {
    if (isEmpty(q))
        return -1;
    return q->front->data;
}
int rear(Queue* q) {
    if (isEmpty(q))
        return -1;
    return q->rear->data;
}
int main() {
    Queue* q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    printf("Front element is %d\n", front(q));
    printf("Rear element is %d\n", rear(q));
    printf("Dequeued element is %d\n", dequeue(q));
    printf("Dequeued element is %d\n", dequeue(q));
    printf("Front element is %d\n", front(q));
    printf("Rear element is %d\n", rear(q));
    return 0;
}
