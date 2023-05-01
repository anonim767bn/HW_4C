#include <stdio.h>

int main() {
    int quanity, negative_count = 0, zero_count =0 ,positive_count = 0;
    //создаем переменные счетчики и переменную кьюанити, которая хранит количество чисел
    scanf("%d", &quanity);
    //считываем количесто чисел
    int input;
    // объявляем переменную, в которой будем хранить вводимые числа
    for(int i = 0; i < quanity; i++) {
        //создаем цикл с количеством итераций равным количеству вводимых чисел
        scanf("%d", &input);
        //считываем число, а после определяем к какому типу оно принадлежит, и увеличиваем соответствующий счётчик на 1
        if (input>0) {
            positive_count++;
        } else if (input == 0) {
            zero_count++;
        } else {
            negative_count++;
        }
    }
    printf("%d %d %d", zero_count, positive_count, negative_count);
    //выводим счетчики в нужном порядке

    return 0;
}