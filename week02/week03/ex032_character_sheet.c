#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char Character_Name[50];
int Max_HP;
int HP;
int Attack_Power;
int Defense;
int level;
int Hp_Bar;

// แสดงค่าและขนาด
printf("=== Create Character ===\n");
printf("Name: ");
scanf("%s", Character_Name);
printf("Max HP: ");
scanf("%d", &Max_HP);
printf("HP: ");
scanf("%d", &HP);
printf("Attack Power: ");
scanf("%d", &Attack_Power);
printf("Defense: ");
scanf("%d", &Defense);
printf("Level: ");
scanf("%d", &level);

// =======================
// คำนวณ HP BAR
// =======================

if (Max_HP > 0)
{
    Hp_Bar = (int)((long long)HP * 10 / Max_HP);
}
else
{
    Hp_Bar = 0;
}

if (Hp_Bar > 10)
{
    Hp_Bar = 10;
}

if (Hp_Bar < 0)
{
    Hp_Bar = 0;
}


// =======================
// คำนวณ POWER SCORE
// =======================

long long Power_Score =
    ((long long)Attack_Power * 2 + (long long)Defense + (long long)HP / 10);

printf("\n=== CHARACTER SHEET ===\n");
printf("╔═════════════════════════════════════════════════╗\n");
printf("║ %-47s ║\n", Character_Name);
printf("╠═════════════════════════════════════════════════╣\n");
printf("║ Level          : %-31d║\n", level);
printf("║ HP             : %-11d/%-19d║\n", HP, Max_HP);
printf("║ ATK            : %-31d║\n", Attack_Power);
printf("║ DEF            : %-31d║\n", Defense);
printf("╠═════════════════════════════════════════════════╣\n");
printf("║ Hp Bar         : ");

for (int i = 0; i < Hp_Bar; i++)
{
    printf("■");
}

for (int i = Hp_Bar; i < 10; i++)
{
    printf(" ");
}

printf("                     ║\n");

printf("║ power score    : %-31lld║\n", Power_Score);

printf("╚═════════════════════════════════════════════════╝\n");

return 0;
}