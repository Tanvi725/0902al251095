
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int data)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

struct Node* mergeLists(struct Node *L1, struct Node *L2)
{
    struct Node dummy;
    struct Node *tail = &dummy;

    dummy.next = NULL;

    while (L1 != NULL && L2 != NULL)
    {
        if (L1->data <= L2->data)
        {
            tail->next = L1;
            L1 = L1->next;
        }
        else
        {
            tail->next = L2;
            L2 = L2->next;
        }

        tail = tail->next;
    }

    if (L1 != NULL)
        tail->next = L1;
    else
        tail->next = L2;

    return dummy.next;
}

void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);

        if (head->next != NULL)
            printf(" -> ");

        head = head->next;
    }

    printf("\n");
}

int main()
{
    struct Node *L1, *L2, *merged;

    L1 = createNode(10);
    L1->next = createNode(30);
    L1->next->next = createNode(50);
    L1->next->next->next = createNode(70);

    L2 = createNode(20);
    L2->next = createNode(25);
    L2->next->next = createNode(40);
    L2->next->next->next = createNode(80);

    printf("List 1: ");
    display(L1);

    printf("List 2: ");
    display(L2);

    merged = mergeLists(L1, L2);

    printf("Merged sorted list: ");
    display(merged);

    return 0;
}