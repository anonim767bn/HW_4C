#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[100];
    //создаем пустую строку на 100 чаров
    fgets(pass, 100, stdin);
    //считываем данные с консоли

    if ( !(strlen(pass) > 7 && strlen(pass) < 15) ) {
        printf("NO\n");
        return 0;
        //если длинна не соответствует условию, то выводим no и заканчиваем программу с кодом 0
    }

    for(int i = 0; i < strlen(pass); i++) {
        if ( !(pass[i] >= 33 && pass[i] <= 126) ){
            printf("NO\n");
            return 0;
        }
        // теперь циклом пробегаемся по всем элементам массива, и если натыкаемся на недопустимый символ, то выводим no и завершаем прогамму с кодом 0
    }

    int bigLetter = 0, smallLetter = 0, number = 0, other = 0;
    

    for (int i = 0; i < strlen(pass); i++)
    {
        number = (isdigit(pass[i])) ? 1:number;
        smallLetter = (islower(pass[i])) ? 1:smallLetter;
        bigLetter = (isupper(pass)) ? 1:bigLetter;
        other = ((pass[i]>32 && pass[i]<48) || (pass[i]>'9' && pass[i]<'A') || (pass[i]>'Z' && pass[i]<'a') || pass[i]>'z') ? 1:other;
        // с помощью тернарных операторов присваиваем переменной ,отвечающей за определённый вид символов, значение 1, если встретим такой тип символов
        if (smallLetter + bigLetter + number + other >= 3){
            printf("YES\n");
            return 0;
            // если в пароле присутствует хотя бы 3 из 4 типов символов то выводим YES и завершаемся с кодом 0
        }
        
    }
    printf("NO\n");
    return 0;
    // соответственно если программа не завершилась ранее с выводом no или yes и дошла до этой строчки кода, то выводим no и завершаемся кодом 0
}