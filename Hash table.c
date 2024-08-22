#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 10
typedef struct Node {
    char *key;
    int value;
    struct Node *next;
} Node;
unsigned int hash(const char *key) {
    unsigned int hashValue = 0;
    while (*key) {
        hashValue = (hashValue << 5) + *key++;
    }
    return hashValue % TABLE_SIZE;
}
Node* createNode(const char *key, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}
void insert(Node *hashTable[], const char *key, int value) {
    unsigned int index = hash(key);
    Node *newNode = createNode(key, value);

    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        Node *temp = hashTable[index];
        while (temp->next != NULL && strcmp(temp->key, key) != 0) {
            temp = temp->next;
        }
        if (strcmp(temp->key, key) == 0) {
            temp->value = value;
            free(newNode->key);
            free(newNode);
        } else {
            temp->next = newNode;
        }
    }
}
int search(Node *hashTable[], const char *key) {
    unsigned int index = hash(key);
    Node *temp = hashTable[index];

    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0) {
            return temp->value;
        }
        temp = temp->next;
    }
    return -1; 
}
void delete(Node *hashTable[], const char *key) {
    unsigned int index = hash(key);
    Node *temp = hashTable[index];
    Node *prev = NULL;
    while (temp != NULL && strcmp(temp->key, key) != 0) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found\n");
        return;
    }
l
    if (prev == NULL) {
        hashTable[index] = temp->next;
    } else {
        prev->next = temp->next;
    }
    free(temp->key);
    free(temp);
    printf("Key deleted\n");
}
void printTable(Node *hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        Node *temp = hashTable[i];
        while (temp != NULL) {
            printf("(%s, %d) -> ", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void freeTable(Node *hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node *temp = hashTable[i];
        while (temp != NULL) {
            Node *toFree = temp;
            temp = temp->next;
            free(toFree->key);
            free(toFree);
        }
    }
}
int main() {
    Node *hashTable[TABLE_SIZE] = {NULL};
    insert(hashTable, "apple", 1);
    insert(hashTable, "banana", 2);
    insert(hashTable, "orange", 3);
    insert(hashTable, "mango", 4);
    insert(hashTable, "peach", 5);
    printTable(hashTable);
    printf("Value for key 'apple': %d\n", search(hashTable, "apple"));
    printf("Value for key 'banana': %d\n", search(hashTable, "banana"));
    delete(hashTable, "banana");
    printTable(hashTable);
    freeTable(hashTable);
    return 0;
}
