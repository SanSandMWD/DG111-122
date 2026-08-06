#include <stdio.h>

int main(void) {
    int gold = 1000;
    int menuselected;

    int cartTotal = 0;
    int finalTotal = 0;

    _Bool boughtSword = 0;
    _Bool boughtArmor = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);

    printf("1. Health Potion  - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion    - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword     - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor  - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n");

    do {
        printf("\nSelect item: ");

        if (scanf("%d", &menuselected) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        switch (menuselected) {
            case 1:
                if (gold >= cartTotal + 50) {
                    cartTotal += 50;

                    printf("Added Health Potion to cart.\n");
                } else {
                    printf("Not enough Gold!\n");
                }
                break;

            case 2:
                if (gold >= cartTotal + 80) {
                    cartTotal += 80;

                    printf("Added Mana Potion to cart.\n");
                } else {
                    printf("Not enough Gold!\n");
                }
                break;

            case 3:
                if (gold >= cartTotal + 500) {
                    cartTotal += 500;
                    boughtSword = 1;

                    printf("Added Iron Sword to cart.\n");
                } else {
                    printf("Not enough Gold!\n");
                }
                break;

            case 4:
                if (gold >= cartTotal + 300) {
                    cartTotal += 300;
                    boughtArmor = 1;

                    printf("Added Leather Armor to cart.\n");
                } else {
                    printf("Not enough Gold!\n");
                }
                break;

            case 5:
                printf("\n=== Checkout ===\n");
                break;

            default:
                printf("Invalid selection!\n");
        }

    } while (menuselected != 5);

    finalTotal = cartTotal;

    if (boughtSword && boughtArmor) {
        finalTotal = cartTotal * 90 / 100;

        printf("Warrior Bundle! (-10%%)\n");
        printf("Original total: %d Gold\n", cartTotal);
        printf("Discount: %d Gold\n", cartTotal - finalTotal);
    }

    gold -= finalTotal;

    printf("Total price: %d Gold\n", finalTotal);
    printf("Remaining Gold: %d Gold\n", gold);

    return 0;
}