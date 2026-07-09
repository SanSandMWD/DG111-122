#include <stdio.h>
int main() {
// ประกาศและกาหนดค่าตัวแปร
char name[50];
int age;
float gpa;
char favoriteSubject[50];
// แสดงค่าและขนาด
printf("=== Enter Data ===\n");
printf("Name: ");
scanf("%s", name);
printf("Age: ");
scanf("%d", &age);
printf("GPA: ");
scanf("%f", &gpa);
printf("Favorite Subject: ");
scanf("%s", favoriteSubject);
printf("\n=== PERSONAL CARD ===\n");
printf("┌────────────────────────────────────────────┐\n");
printf("│ Name\t\t: %-26s │\n", name);
printf("│ Age\t\t: %-26d │\n", age);
printf("│ GPA\t\t: %-26f │\n", gpa);
printf("│ Favorite Subject: %-24s │\n", favoriteSubject);
printf("└────────────────────────────────────────────┘\n");
return 0;
}