

#include <math.h>
#include <stdio.h>
#define M_PI 3.16159265358979323846
void TR(int x1, int y1, int x2, int y2, int x3, int y3, int x4,
        int y4) { //построение треугольнка
  printf("Введите координаты точки 1: ");
  scanf("%d %d", &x1, &y1);
  printf("\n");
  printf("Введите координаты точки 2: ");
  scanf("%d %d", &x2, &y2);
  printf("\n");
  printf("Введите координаты точки 3: ");
  scanf("%d %d", &x3, &y3);
  printf("\n");
  printf("Введите координаты точки 1: ");
  scanf("%d %d", &x4, &y4);
  printf("\n");

  printf("%d %d, %d %d, %d %d, %d %d\n", x1, y1, x2, y2, x3, y3, x4, y4);

  double AB, BC, CA; //стороны треугольника
  int p1 = (((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
  AB = sqrt(p1); //гипотенуза
  int p2 = (((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
  BC = sqrt(p2);
  int p3 = (((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3)));
  CA = sqrt(p3);
  printf("%.2f     %.2f    %.2f", AB, BC, CA);
}

int main() {
  int x1, y1, x2, y2, x3, y3, x4, y4;

  /*float R, P;   //радиус, периметр
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
  printf("Периметр: %f\n", P);*/
  TR(x1, y1, x2, y2, x3, y3, x4, y4);
}

