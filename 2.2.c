#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой, если введено не число, то выдаёт ошибку и выходит из программы
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Вычисляет значение первой функции
 * @param a - заданная константа a
 * @param x - число, введённое пользователем
 * @return Рассчитанное значение функции
 */
double yType1(const double a, const double x);

/**
 * @brief Вычисляет значение второй функции
 * @param a - заданная константа a
 * @param x - число, введённое пользователем
 * @return Рассчитанное значение функции
 */
double yType2(const double a, const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double a = 2.5;

    double x = getDouble();
    if (x > a)
    {
        printf("y = %lf", yType1(a, x));
    }
    else
    {
        printf("y = %lf", yType2(a, x));
    }

    return 0;
}


double getDouble()
{
    double number = 0.0;
    printf("Введите число x");

    if (scanf("%lf", &number) != 1)
    {
        printf("Ошибка. Нужно ввести число");
        exit(1);
    }

    return number;
}

double yType1(const double a, const double x)
{
    return x*pow((x - a),1.0/3.0);
}

double yType2(const double a, const double x)
{
    return x*sin(a)*x;
}
