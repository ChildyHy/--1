#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 1.825;
    const double y = 18.225;
    const double z = -3.298;
    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f", B(x, y, z));
    return 0;
}

double A(const double x, const double y, const double z)
{
    return pow(x,y/x) - pow(y/x,1/3);
}

double B(const double x, const double y, const double z)
{
    return (y - x) + ((y - z)/(y - x))/(3 + (pow(z,2)/5));
}

