#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) 
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Function to find the height of the BST
int getHeight(struct Node* root) {
    if (root == NULL)
        return 0;
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to print spaces for formatting
void printSpaces(int count) {
    for (int i = 0; i < count; i++)
        printf(" ");
}

// Function to print the BST level-wise
void printLevel(struct Node* root, int level, int space) {
    if (root == NULL) {
        printSpaces(space);
        return;
    }
    if (level == 1) {
        printf("%d", root->data);
        printSpaces(space - (root->data > 9 ? 2 : 1)); // Adjust spacing for 2-digit numbers
    } else if (level > 1) {
        printLevel(root->left, level - 1, space / 2);
        printLevel(root->right, level - 1, space / 2);
    }
}

// Function to print BST in a vertical format
void printBSTVertical(struct Node* root) {
    int height = getHeight(root);
    int space = 64; // Adjust spacing for readability

    for (int i = 1; i <= height; i++) {
        printSpaces(space / 2);  // Center the tree
        printLevel(root, i, space);
        printf("\n\n");
        space /= 2;  // Reduce spacing for lower levels
    }
}

int main() {
    struct Node* root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80}; // Example input values
    int n = sizeof(values) / sizeof(values[0]);

    // Insert values into BST
    for (int i = 0; i < n; i++)
        root = insert(root, values[i]);

    // Print BST in vertical format
    printf("Vertically Printed BST:\n\n");
    printBSTVertical(root);

    return 0;
}