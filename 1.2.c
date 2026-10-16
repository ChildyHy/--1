#include <stdio.h>

/**
 * @brief Вычисляет площать прямоугольника с заданной стороной
 * @param a Сторона прямоугольника
 * @param n Коэффицент для вычисления второй стороны
 * @return Рассчитанное значение
 */
double square(const double a, const double n);

/**
 * @brief Вычисляет периметр прямоугольника с заданной стороной
 * @param a Сторона прямоугольника
 * @param n Коэффицент для вычисления второй стороны
 * @return Рассчитанное значение
 */
double perimeter(const double a, const double n);

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double a = getDouble();
    double n = getDouble();
    printf("Square is %lf\n",square(a,n));
    printf("Perimeter is %lf",perimeter(a,n));
    return 0;
}

double square(const double a, const double n)
{
    return a*a*n/100;
}

double perimeter(const double a, const double n)
{
    return (a+a*n/100)*2;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf",&value);
    return value;
}
