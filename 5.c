#include <stdio.h>

int main() {
    float input = 1;
    //объявляем переменную, в которой будем хранить вводимые числа
    float summ = 0;\
    //создаем переменную в которой будем хранить сумму вводимых чисел
    float i;
    //объявляем итератор, который будет хранить количество цифр
    for (i = 0; input != 0; i++)
    {
        scanf("%f", &input);
        summ+=input;
        //считываем ввод и прибавляем к сумме, после чего i увеличивается на 1
    }
    
    printf("%f\n", summ/(i-1));
    //выводим результат
}