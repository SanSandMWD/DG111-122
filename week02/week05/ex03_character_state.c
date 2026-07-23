#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int max_hp;      // 1-999
    int damage;      // 0-999
    int is_poisoned; // 0 = not poisoned, 1 = poisoned
    int attack_count; // >= 0

    printf("Max HP: ");
    if (scanf("%d", &max_hp) != 1) return 0;
    if (max_hp < 1) max_hp = 1;

    printf("Damage Taken: ");
    if (scanf("%d", &damage) != 1) return 0;
    if (damage < 0) damage = 0;

    printf("Poisoned (0/1): ");
    if (scanf("%d", &is_poisoned) != 1) is_poisoned = 0;
    bool poisoned = (is_poisoned != 0);

    printf("Attack Count: ");
    if (scanf("%d", &attack_count) != 1) attack_count = 0;

    int hp = max_hp - damage;
    if (hp < 0) hp = 0; // ห้าม hp ติดลบ

    double hp_ratio = (double)hp / max_hp;
    bool is_critical = false;
    const char *state = "NORMAL";

    if (hp == 0) {
        state = "DEAD";
    } else if (poisoned) {
        state = "POISONED";
    } else if (hp_ratio < 0.25) {
        state = "CRITICAL";
        is_critical = true;
    }

    const int bar_len = 10;
    int filled = (int)(hp_ratio * bar_len + 0.5);
    if (filled < 0) filled = 0;
    if (filled > bar_len) filled = bar_len;

    printf("=== Character Status ===\n");
    printf("HP : [");
    for (int i = 0; i < filled; ++i) {
        printf("█");
    }
    for (int i = filled; i < bar_len; ++i) {
        printf("-");
    }
    printf("] %d/%d", hp, max_hp);

    if (hp == 0) {
        printf(" DEAD!");

    } else if (is_critical) {
        printf(" 🌟CRITICAL!");
    } else if (poisoned) {
        printf(" 🫧POISONED!");
    }
    printf("\n");

    printf("State: %s\n", state);
        if (attack_count > 0 && attack_count % 5 == 0) {
        printf("☢Ultimate Ready! ติดสถานะกลับบ้านไม่ถูก(Attack #5)");
    }
    return 0;
}

  








