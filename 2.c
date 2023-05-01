#include <stdio.h>

int main() {
    int quanity, number;
    // объявляем переменные, для количества дней и номер первого числа месяца
    scanf("%d %d", &number, &quanity);
    // считываем их с консоли
    for (int i = 0; i < quanity+number-1; i++) {
    // создаем цикл, в котором будем красиво выводить наш календарь в консоль
        if(i < number-1) {
            printf("   ");
            continue;
            // расставляем нужные отступы перед первым числом месяца
        }
        if(i % 7 == 0){
            printf("\n");
            // каждую новую неделю начинаем с новой строки
        }
        printf((i-number+2 < 10) ? " ":"");
        // поскольку однозначные числа занимают меньше места чем 2 значные, то добавляем перед ними пробел, чтоб календарь не съезжал влево
        printf("%d ", i-number+2);
        //выводим число месяца
    }
    printf("\n");
    // для красоты спускаемся на строку вниз и завершаемся с кодом 0
    return 0;
}