#include <stdio.h>

int main(void) {
    int gold;
    int menuselected;
  


   

    gold = 1000; // Starting gold for the player

    printf("=== === ITEM SHOP === ===\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Warrior Bundle - 720 Gold (+20 ATK, +15 DEF) [10%% off]\n");
    printf("6. Exit\n");


    printf("Select item : ");
    if (scanf("%d", &menuselected) != 1) {
        return 1;
    }

    switch (menuselected) {
        case 1:
            if (gold >= 50) {
                gold -= 50;
                printf("=== Purchase ===\nHealth Potion - 50 Gold\nRemaining : %d Gold\nHP Bonus : +50 HP\nItem purchased successfully! ✓\n", gold);
            } else {
                printf("Not enough Gold!\n");
            }
            break;
        case 2:
            if (gold >= 80) {
                gold -= 80;
                printf("=== Purchase ===\nMana Potion - 80 Gold\nRemaining : %d Gold\nMP Bonus : +30 MP\nItem purchased successfully! ✓\n", gold);
            } else {
                printf("Not enough Gold!\n");
            }
            break;
            


        case 3:
            if (gold >= 500) {
                gold -= 500;
                printf("=== Purchase ===\nIron Sword - 500 Gold\nRemaining : %d Gold\nATK Bonus : +20 ATK\nItem purchased successfully! ✓\n", gold);
            } else {
                printf("Not enough gold!\n");
            }
            break;
        case 4:
            if (gold >= 300) {
                gold -= 300;
                printf("=== Purchase ===\nLeather Armor - 300 Gold\nRemaining : %d Gold\nDEF Bonus : +15 DEF\nItem purchased successfully! ✓\n", gold);
            } else {
                printf("Not enough Gold!\n");
            }
            break;
        case 5:
            if (gold >= 720) {
                gold -= 720;
                printf("=== Purchase ===\nWarrior Bundle - 720 Gold\nRemaining : %d Gold\nATK Bonus : +20 ATK\nDEF Bonus : +15 DEF\nItem purchased successfully! ✓\n", gold);
            } else {
                printf("Not enough Gold!\n");
            }
            break;
        case 6:
            printf("Exiting the shop.\n");
            break;
        default:
            printf("Invalid selection!\n");
    }

//ถ้าซื้อ Iron Sword (3) และ Leather Armor (4) ในรอบเดียวกัน → ลดราคารวม 10% พร้อมแจ้ง "Warrior Bundle!"

    return 0;
}

  








