#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет объём шара с заданным радиусом
 * @param radius - заданный радиус шара
 * @return Рассчитанное значение объёма
 */
double v(const double radius);

/**
 * @brief Вычисляет площадь поверхности шара
 * @param radius - заданный радиус шара
 * @return Рассчитанное значение площади
 */
double s(const double radius);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что радиус - положительное число
 * @param radius - считанное значение радиуса шара
 */
void checkRadius(const double radius);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("Введите радиус шара: ");
    double radius = getDouble();
    checkRadius(radius);
    printf("Объём шара: %lf\n",v(radius));
    printf("Площадь поверхности шара: %lf\n",s(radius));
    return 0;
}

double v(const double radius)
{
    return (4.0/3.0)*M_PI*pow(radius,3);
}

double s(const double radius)
{
    return 4*M_PI*pow(radius,2);
}

double getDouble()
{
    double radius = 0.0;
    if (scanf("%lf",&radius) != 1)
        {
            printf("Ошибка. Нужно ввести число.");
            exit(1);
        }
    return radius;
}

void checkRadius(const double radius)
{
   if (radius <= 0)
   {
       printf("Ошибка. Радиус шара должен быть большое 0.");
       exit(1);
   }
}
