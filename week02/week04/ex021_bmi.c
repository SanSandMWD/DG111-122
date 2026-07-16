#include <stdio.h>

int main() {
// ประกาศและกาหนดค่าตัวแปร

int kg;
int cm;

// แสดงค่าและขนาด
printf("=== กรอกข้อมูล ===\n");
printf("Input Weight (kg): ");
scanf("%d", &kg);
printf("Input Height (cm): ");
scanf("%d", &cm);

float height_m = cm / 100.0;
float bmi = kg / (height_m * height_m);
if (bmi <= 18.5) {
    printf("Output BMI: %.2f → Underweight\n", bmi);
} else if (bmi >= 18.5 && bmi < 24.9) {
    printf("Output BMI: %.2f → Normal ✓\n", bmi);
} else if (bmi >= 25.0 && bmi < 29.9) {
        printf("Output BMI: %.2f → Overweight\n", bmi);
   
    } else if (bmi >= 30) {
        printf("Output BMI: %.2f → Obese \n", bmi);
    
    }

  

}