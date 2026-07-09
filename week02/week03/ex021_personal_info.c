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
printf("\n=== Personal Info ===\n");
printf("Name\t: %s \n", name);
printf("Age\t: %d %s\n", age, "years old");
printf("GPA\t: %.2f \n", gpa);
printf("Favorite Subject: %s \n", favoriteSubject);
return 0;
}