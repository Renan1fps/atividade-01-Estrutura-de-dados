#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h> // for sleep()

typedef struct Node
{
    int key;
    int height;
    struct Node *left;
    struct Node *right;
} Node;

int max(int a, int b)
{
    return a > b ? a : b;
}

int getHeight(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node->height;
}

int getBalance(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

Node *createNode(int key)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->key = key;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *rotateRight(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Node *rotateLeft(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node *insert(Node *node, int key)
{
    if (node == NULL)
    {
        return createNode(key);
    }

    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }
    else
    {
        return node;
    }

    node->height = max(getHeight(node->left), getHeight(node->right)) + 1;

    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
    {
        return rotateRight(node);
    }

    if (balance < -1 && key > node->right->key)
    {
        return rotateLeft(node);
    }

    if (balance > 1 && key > node->left->key)
    {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    if (balance < -1 && key < node->right->key)
    {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\n", root->key);
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    double time_spent = 0.0;
    clock_t begin = clock();

    Node *root = NULL;

    for (size_t i = 0; i < 10000000; i++)
    {
        srand(time(NULL));
        printf("numero %d", rand() % 100);
        root = insert(root, rand() % 100);
    }

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
