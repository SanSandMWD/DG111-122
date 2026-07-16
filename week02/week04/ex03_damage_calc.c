// โปรแกรมคำนวณความเสียหาย
// รับค่า: Player Attack, Enemy Defense, และ Hit Number

#include <stdio.h>
#include <math.h>

int main(void) {
	int attack, defense, hits;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack : ");
    scanf("%d", &attack);
    printf("Enemy Defense : ");   
    scanf("%d", &defense);
    printf("Hit Number : ");
    scanf("%d", &hits);
    int base_damage = attack - defense;
    int damage;

    if (hits % 5 == 0) {
        damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d *** CRITICAL HIT! x1.5 ***\n", damage);
    } else {
        damage = base_damage;
        printf("Damage = %d (Normal)\n", damage);
    }

    return 0;
}
 