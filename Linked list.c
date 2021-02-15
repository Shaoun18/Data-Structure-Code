#include<stdio.h>
int main()
{
    Node *n;
    n = create_node(10,NULL);
    n = append(20,NULL);
    n = remove_node(10);
    printf("data = %d\n", n->data);
    return 0;
}

struct node {
    int data;
    Node *next;
};

Node *create_node(int item, Node *next)
{
    Node*new_node = (Node*) malloc (sizeof(Node));
    if (new_node == NULL)
    {
        printf("Error!Could not create a new node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

Node *append(Node *head,int item)
{
    Node *new_node = create_node(item,NULL);

    if (head = NULL)
    {
        return new_node;
    }

    Node*current_node = head;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;
}

Node *remove_node(Node *head, Node *node)
{
    if(node == head)
    {
        head = node->next;
        free(node);
        return head;
    }
    Node*current_node = head;
    while (current_node != NULL)
    {
        if (current_node->next == node)
        {
            break;
        }
        current_node = current_node->next;
    }
    if (current_node == NULL)
    {
        return head;
    }
    current_node -> next = node->next;
    free(node);
    return head;
}
