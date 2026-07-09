#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char Character_Name[50];
int Max_HP;
int Attack_Power;
int Defense;
int level;
// แสดงค่าและขนาด
printf("=== Create Character ===\n");
printf("Name: ");
scanf("%s", Character_Name);
printf("Max HP: ");
scanf("%d", &Max_HP);
printf("Attack Power: ");
scanf("%d", &Attack_Power);
printf("Defense: ");
scanf("%d", &Defense);
printf("Level: ");
scanf("%d", &level);
printf("\n=== Character Summary ===\n");
printf("Name\t: %s \n", Character_Name);
printf("Level\t: %d \n", level);
printf("HP\t: %d \n", Max_HP);
printf("ATK\t: %d \n", Attack_Power);
printf("DEF\t: %d \n", Defense);

return 0;
}