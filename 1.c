#include <stdio.h>

int main() {
    int month, year;
    // объявляем 2 целочисленные переменные в которые будем считывать ввод
    scanf("%d %d", &month, &year);
    //считываем с консоли номер месяца и год и передаем эти данные переменным, которые создали ранее
    printf(month!=2 ? (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ? "31":"30") : ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "29":"28") );
    //при помощи "простого" тернарного оператора выводим количество дней в месяце
}