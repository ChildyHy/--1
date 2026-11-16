#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Проверяет, является ли среднее арифметическое двух чисел целым
 * @param a Первое число
 * @param b Второе число
 * @return 1 если среднее арифметическое целое, 0 иначе
 */
int checkAverage(const int a, const int b);

/**
 * @brief Просит пользователя ввести натуральное число и проверяет его
 * @return Натуральное число
 */
int getNumber();

/**
 * @brief Считывает с клавиатуры целое число. При неверном вводе, выдаёт ошибку и выходит из программы
 * @return Считанное значение
 */
int getInt();


/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const int number1 = getNumber();
    const int number2 = getNumber();

    checkAverage(number1, number2);

    return 0;
}

int checkAverage(const int a, const int b)
{
    if ((a+b)%2==0)
    {
        printf("Среднее арифметическое = %d, является целым числом\n", (a+b)/2);
        return 1;
    }
    else
    {
        printf("Cреднее арифметическое = %lf, не является целым числом\n", (a+b)/2.0);
        return 0;
    }
}

int getNumber()
{
    printf("Введите натуральное число.\n");
    int number = getInt();

    if (number <= 0)
    {
        printf("Ошибка. Число должно быть больше 0.");
        exit(1);
    }

    return number;
}

int getInt()
{
    int value = 0;

    if (scanf("%d", &value) != 1)
    {
        printf("Ошибка. Нужно вводить целое число.\n");
        exit(1);
    }

    return value;
}
