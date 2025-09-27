#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *next;
};

// Function to create the first node
struct node* create(int data) {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = data;
    head->next = NULL;
    return head;
}

// Display function
void display(struct node* head) {
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
struct node* insert_first(struct node* head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    return newNode;  // new head
}

// Insert at end
struct node* insert_last(struct node* head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) return newNode;  // first node

    struct node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}

// Insert at given position (1-based index)
struct node* insert_middle(struct node* head, int data, int pos) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;

    if (pos == 1) { // same as insert_first
        newNode->next = head;
        return newNode;
    }

    struct node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("\nPosition out of range\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Delete first node
struct node* delete_first(struct node* head) {
    if (head == NULL) {
        printf("\nList is empty\n");
        return NULL;
    }
    struct node* temp = head;
    head = head->next;
    printf("\nDeleted: %d\n", temp->data);
    free(temp);
    return head;
}

// Delete last node
struct node* delete_last(struct node* head) {
    if (head == NULL) {
        printf("\nList is empty\n");
        return NULL;
    }
    if (head->next == NULL) {
        printf("\nDeleted: %d\n", head->data);
        free(head);
        return NULL;
    }
    struct node* temp = head;
    struct node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("\nDeleted: %d\n", temp->data);
    free(temp);
    return head;
}

// Delete middle (at given position)
struct node* delete_middle(struct node* head, int pos) {
    if (head == NULL) {
        printf("\nList is empty\n");
        return NULL;
    }

    if (pos == 1) {  // same as delete_first
        struct node* temp = head;
        head = head->next;
        printf("\nDeleted: %d\n", temp->data);
        free(temp);
        return head;
    }

    struct node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("\nPosition out of range\n");
        return head;
    }

    struct node* del = temp->next;
    temp->next = del->next;
    printf("\nDeleted: %d\n", del->data);
    free(del);
    return head;
}

int main() {
    struct node* head = NULL;
    int choice, data, pos;

    do {
        printf("\n----- Linked List Menu -----\n");
        printf("1. Create first node\n");
        printf("2. Display\n");
        printf("3. Insert First\n");
        printf("4. Insert Middle\n");
        printf("5. Insert Last\n");
        printf("6. Delete First\n");
        printf("7. Delete Middle\n");
        printf("8. Delete Last\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (head == NULL) {
                printf("Enter data: ");
                scanf("%d", &data);
                head = create(data);
            } else {
                printf("List already created!\n");
            }
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            head = insert_first(head, data);
            break;
        case 4:
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &pos);
            head = insert_middle(head, data, pos);
            break;
        case 5:
            printf("Enter data: ");
            scanf("%d", &data);
            head = insert_last(head, data);
            break;
        case 6:
            head = delete_first(head);
            break;
        case 7:
            printf("Enter position: ");
            scanf("%d", &pos);
            head = delete_middle(head, pos);
            break;
        case 8:
            head = delete_last(head);
            break;
        }
    } while (choice != 9);

    return 0;
}
