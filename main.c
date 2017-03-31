#include <stdio.h>

/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */

int main() {

    float fahr, celsius;
    int lower, upper, step;
    char key;

    lower = 0; // Нижняя граница температур
    upper = 300; // Верхняя граница температур
    step = 1; // Шаг

    printf("Для вывода таблицы перевода температур из Фаренгейт в Целсии нажмите \"f\", для из Цельсий в Фаренгейт нажмите \"c\": ");
    scanf("%c", &key);

    switch(key){
            case 'f':{
            printf("Таблица перевода температур из Фаренгейт в Цельсии: \n");
            fahr = lower;
            while(fahr <= upper){
                celsius = (5.0/9.0) * (fahr-32.0);
                printf ("%3.0f\t%6.1f\n", fahr, celsius);
                fahr = fahr + step;
            }
                break;
                case 'c':{
                    printf("Таблица перевода температур из Цельсий в Фаренгейт: \n");
                    celsius = lower;
                    while(celsius <= upper){
                        fahr = 9.0/5.0 * celsius + 32.0;
                        printf ("%3.0f\t%6.1f\n", celsius, fahr);
                        celsius = celsius + step;
                    }
                    break;
                }
                default:{
                    printf("Ошибка! Нажмите \"f\", или \"c\"");
                }
                break;
            }
        }
}
