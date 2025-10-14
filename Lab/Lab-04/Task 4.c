#include <stdio.h>

int main() {
    int n;
    char c1, c2, c3, c4;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    int total = 0;

    printf("\t\t\tABC Restaurant Online Order Placement\n");
    printf("\t\t\t\t\tWELCOME!\n\n");

    printf("Please select from the following Menu\n");
    printf("B= Burger\n");
    printf("F= French Fries\n");
    printf("P= Pizza\n");
    printf("S= Sandwiches\n\n");

    printf("How many types of snacks you need to order: ");
    scanf("%d", &n);

    if (n < 1 || n > 4) {
        printf("Invalid number of snacks!\n");
        return 0;
    }

    // Snack #1
    printf("Enter first Snack you want to order: ");
    scanf(" %c", &c1);
    printf("Please provide quantity: ");
    scanf("%d", &q1);

    // Snack #2
    if (n >= 2) {
        printf("Enter second Snack you want to order: ");
        scanf(" %c", &c2);
        printf("Please provide quantity: ");
        scanf("%d", &q2);
    }

    // Snack #3
    if (n >= 3) {
        printf("Enter third Snack you want to order: ");
        scanf(" %c", &c3);
        printf("Please provide quantity: ");
        scanf("%d", &q3);
    }

    // Snack #4
    if (n == 4) {
        printf("Enter fourth Snack you want to order: ");
        scanf(" %c", &c4);
        printf("Please provide quantity: ");
        scanf("%d", &q4);
    }

    printf("======================================================\n");
    printf("You have ordered!\n");

    // Calculate and display each snack
    if (q1 > 0) {
        int cost1 = 0;
        switch (c1) {
            case 'B': case 'b': cost1 = q1 * 200; printf("%d Burger(s) value %d PKR\n", q1, cost1); break;
            case 'F': case 'f': cost1 = q1 * 50;  printf("%d French Fries value %d PKR\n", q1, cost1); break;
            case 'P': case 'p': cost1 = q1 * 500; printf("%d Pizza(s) value %d PKR\n", q1, cost1); break;
            case 'S': case 's': cost1 = q1 * 150; printf("%d Sandwich(es) value %d PKR\n", q1, cost1); break;
            default: printf("Invalid item 1!\n");
        }
        total += cost1;
    }

    if (q2 > 0) {
        int cost2 = 0;
        switch (c2) {
            case 'B': case 'b': cost2 = q2 * 200; printf("%d Burger(s) value %d PKR\n", q2, cost2); break;
            case 'F': case 'f': cost2 = q2 * 50;  printf("%d French Fries value %d PKR\n", q2, cost2); break;
            case 'P': case 'p': cost2 = q2 * 500; printf("%d Pizza(s) value %d PKR\n", q2, cost2); break;
            case 'S': case 's': cost2 = q2 * 150; printf("%d Sandwich(es) value %d PKR\n", q2, cost2); break;
            default: printf("Invalid item 2!\n");
        }
        total += cost2;
    }

    if (q3 > 0) {
        int cost3 = 0;
        switch (c3) {
            case 'B': case 'b': cost3 = q3 * 200; printf("%d Burger(s) value %d PKR\n", q3, cost3); break;
            case 'F': case 'f': cost3 = q3 * 50;  printf("%d French Fries value %d PKR\n", q3, cost3); break;
            case 'P': case 'p': cost3 = q3 * 500; printf("%d Pizza(s) value %d PKR\n", q3, cost3); break;
            case 'S': case 's': cost3 = q3 * 150; printf("%d Sandwich(es) value %d PKR\n", q3, cost3); break;
            default: printf("Invalid item 3!\n");
        }
        total += cost3;
    }

    if (q4 > 0) {
        int cost4 = 0;
        switch (c4) {
            case 'B': case 'b': cost4 = q4 * 200; printf("%d Burger(s) value %d PKR\n", q4, cost4); break;
            case 'F': case 'f': cost4 = q4 * 50;  printf("%d French Fries value %d PKR\n", q4, cost4); break;
            case 'P': case 'p': cost4 = q4 * 500; printf("%d Pizza(s) value %d PKR\n", q4, cost4); break;
            case 'S': case 's': cost4 = q4 * 150; printf("%d Sandwich(es) value %d PKR\n", q4, cost4); break;
            default: printf("Invalid item 4!\n");
        }
        total += cost4;
    }

    printf("Total = %d PKR\n", total);
    printf("Thank you for your order... have a nice day.\n");

    return 0;
}

