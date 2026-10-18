#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief считывает с клавиатуры значение с плавающей точкой, выдаёт ошибку и выходит из программы если введено не число
 * @return считанное значение
 */
double getValue();


/**
 * @brief просит пользователя ввести массу пули в г
 * @return массу пули в г
 */
double getWeight();


 /**
 * @brief просит пользователя ввести скорость летящей пули в м/с
 * @return скорость летящей пули в м/с
 */
double getSpeed();


 /**
 * @brief проверяет что число положительное
 * @param value считанное число 
 */
void checkValue(const double value);



 /**
 * @brief вычисляет значение кинетической энергии пули по заданным данным
 * @param weight масса (в граммах).
 * @param speed скорость летящей пули (в метрах на секунду, м/с)
 * @return кинетическая энергия пули
*/
double energy(const double weight,const double speed);


/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    double weight = getWeight();
    checkValue(weight);
    double speed = getSpeed();
    checkValue(speed);
    printf("кинетическая энергия пули %lf", energy(weight,speed));
    return 0;
}

double getWeight()
{    
    printf("введите массу летящей пули в г \n");
    double weight = getValue();
    
    return weight;
}


double getSpeed()
{
    printf("введите скорость летящей пули в м/с \n");
    double speed = getValue();
    
    return speed;
}

double getValue()
{   double value = 0.0;
    if(scanf("%lf", &value) != 1)
    {
        printf("ошибка");
        exit(1);
    }
    return value;
}

void checkValue(const double value)
{
    if (value <= 0 )
    {
        printf("ошибка");
        exit(1);
    }
}

double energy(const double weight,const double speed)
{
    return (weight/1000 * pow(speed,2)/2);
}
