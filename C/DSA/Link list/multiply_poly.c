#include <stdio.h>
#include <stdlib.h>

// Define a node for the linked list
typedef struct Node {
    int coeff;
    int power;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int coeff, int power) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node into the linked list
void insertNode(Node** head, int coeff, int power) {
    Node* newNode = createNode(coeff, power);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display a polynomial
void displayPolynomial(Node* poly) {
    Node* temp = poly;
    while (temp) {
        printf("%dx^%d", temp->coeff, temp->power);
        if (temp->next) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to multiply two polynomials
Node* multiplyPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    Node* temp1 = poly1;
    Node* temp2 = poly2;

    while (temp1) {
        temp2 = poly2;
        while (temp2) {
            int coeff = temp1->coeff * temp2->coeff;
            int power = temp1->power + temp2->power;

            // Add the product to the result polynomial
            Node* tempResult = result;
            Node* prev = NULL;

            // Check if the power already exists in the result
            while (tempResult && tempResult->power > power) {
                prev = tempResult;
                tempResult = tempResult->next;
            }

            if (tempResult && tempResult->power == power) {
                // If the power exists, update the coefficient
                tempResult->coeff += coeff;
            } else {
                // Insert a new node for the power
                Node* newNode = createNode(coeff, power);
                if (prev == NULL) {
                    newNode->next = result;
                    result = newNode;
                } else {
                    newNode->next = prev->next;
                    prev->next = newNode;
                }
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return result;
}

// Function to input a polynomial from the user
Node* inputPolynomial() {
    Node* poly = NULL;
    int n;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int coeff, power;
        printf("Enter coefficient and power for term %d: ", i + 1);
        scanf("%d %d", &coeff, &power);
        insertNode(&poly, coeff, power);
    }
    return poly;
}

// Main function
int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    printf("Input Polynomial 1:\n");
    poly1 = inputPolynomial();

    printf("Input Polynomial 2:\n");
    poly2 = inputPolynomial();

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    Node* result = multiplyPolynomials(poly1, poly2);

    printf("Result of Multiplication: ");
    displayPolynomial(result);

    return 0;
}