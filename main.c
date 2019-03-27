

#include <math.h>
#include <stdio.h>
#define M_PI 3.16159265358979323846

int main() {
  float R, P;   //радиус, периметр
  float S;      //площадь
  float x1, y1; //координаты для центра окружности
  printf("Задаем точки центра окружнасти: ");
  scanf("%f %f", &x1, &y1);
  printf("\n");
  printf("Задаем координаты радиуса окружности: ");
  scanf("%f", &R);
  printf("\n");

  S = 2 * M_PI * R * R;
  printf("Площадь = %f\n", S);
  P = 2 * M_PI * R;
  printf("Периметр: %f\n", P);
}

