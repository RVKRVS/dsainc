#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

void preorder(struct node *root) {
    if (root == 0) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root) {
    if (root == 0) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root) {
    if (root == 0) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// create binary tree (not necessarily BST)
struct node *create() {
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
        return 0;

    newnode->data = x;
    printf("Enter left child of %d\n", x);
    newnode->left = create();
    printf("Enter right child of %d\n", x);
    newnode->right = create();
    return newnode;
}

// Find minimum node in right subtree (for deletion)
struct node* findMin(struct node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete node from BST
struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
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
    struct node* root = 0;
    root = create();

    printf("\nPreorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    int key;
    printf("\n\nEnter value to delete: ");
    scanf("%d", &key);

    root = deleteNode(root, key);

    printf("\nInorder after deletion: ");
    inorder(root);

    return 0;
}