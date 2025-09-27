#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

// preorder traversal
void preorder(struct node *root) {
    if (root == 0) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// inorder traversal
void inorder(struct node *root) {
    if (root == 0) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// postorder traversal
void postorder(struct node *root) {
    if (root == 0) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// create a new node
struct node* newNode(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

// insert into BST
struct node* insert(struct node* root, int x) {
    if (root == NULL) return newNode(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    // ignore if x already exists
    return root;
}

// find minimum node in right subtree
struct node* findMin(struct node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// delete a node from BST
struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Two children
        struct node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct node* root = NULL;
    int n, x, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insert(root, x);
    }

    printf("\nPreorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    printf("\n\nEnter value to delete: ");
    scanf("%d", &key);

    root = deleteNode(root, key);

    printf("\nInorder after deletion: ");
    inorder(root);

    return 0;
}
