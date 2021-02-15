#include<stdio.h>
int main()
{
    struct Node *root = create_tree();
    getchar();

    printf("%d\n",root->data);
    return 0;
}

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == Null)
    {
        printf("Error!");
        exit(1);
    }

    new_node->data = item;
    new_node->left = Null;
    new_node->right = Null;

    return new_node;
}

void add_left_child(Node *node,Node *child)
{
    node -> left = child;
}

void add_right_child(Node *node,Node *child)
{
    node -> right = child;
}

struct Node *create_tree(int data)
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child (seven, one);
    add_right_child(seven, six);

    return two;

}
