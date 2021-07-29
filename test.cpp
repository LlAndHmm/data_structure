#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct LNode
{
    int data;
    LNode *next;
} LNode, LinkedList;

LinkedList *initList()
{
    LinkedList *L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;
    return L;
}

// 头插法
void head_insert(LinkedList *L, int data)
{
    LNode *node = (LNode *)malloc(sizeof(LNode));
    node->data = data;
    node->next = L->next;
    L->next = node;
}

void printList(LinkedList *L)
{
    LNode *p = L->next;
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}

int main()
{
    LinkedList *L = initList();
    head_insert(L, 1);
    head_insert(L, 3);
    printList(L);
}