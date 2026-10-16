#include <stdio.h>

int main() {
    int ram = 1500;
    int ssd = 2500;
    int keyboard = 800;
    int choice, quantity, budget, payment;
    int subtotal = 0;
    float discount = 0;
    float finalAmount;

    printf("=== COMPUTER SHOP ===\n");
    printf("1. RAM      - P1500\n");
    printf("2. SSD      - P2500\n");
    printf("3. Keyboard - P800\n");

    printf("\nEnter your budget: P");
    scanf("%d", &budget);

    printf("\nSelect a product (1-3): ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity!\n");
    }

    if (choice == 1) {
        subtotal = ram * quantity;
    } else if (choice == 2) {
        subtotal = ssd * quantity;
    } else if (choice == 3) {
        subtotal = keyboard * quantity;
    } else {
        printf("Invalid product selection!\n");
    }

    printf("\nSubtotal: P%d\n", subtotal);

    if (subtotal >= 5000) {
        discount = subtotal * 0.07;
        printf("Discount (7%%): P%.2f\n", discount);
    }

    finalAmount = subtotal - discount;

    printf("Final Amount: P%.2f\n", finalAmount);

    if (budget < finalAmount) {
        printf("Budget shortage: P%.2f\n",
               finalAmount - budget);
    }

    printf("\nEnter customer payment: P");
    scanf("%d", &payment);

    if (payment < finalAmount) {
        printf("Insufficient payment!\n");
        printf("Shortage: P%.2f\n",
               finalAmount - payment);
    } else {
        printf("Change: P%.2f\n",
               payment - finalAmount);
    }

    return 0;
}