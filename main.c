#include <stdio.h>

/* ����� ⠡���� ⥬������ �� ��७�����
� ������ ��� fahr = 0, 20, ..., 300 */

int main() {

    float fahr, celsius;
    int lower, upper, step;
    char key;

    lower = 0; // ������ �࠭�� ⥬������
    upper = 300; // ������ �࠭�� ⥬������
    step = 1; // ���

    printf("��� �뢮�� ⠡���� ��ॢ��� ⥬������ �� ��७���� � ���ᨨ ������ \"f\", ��� �� ����ᨩ � ��७���� ������ \"c\": ");
    scanf("%c", &key);

    switch(key){
            case 'f':{
            printf("������ ��ॢ��� ⥬������ �� ��७���� � ����ᨨ: \n");
            fahr = lower;
            while(fahr <= upper){
                celsius = (5.0/9.0) * (fahr-32.0);
                printf ("%3.0f\t%6.1f\n", fahr, celsius);
                fahr = fahr + step;
            }
                break;
                case 'c':{
                    printf("������ ��ॢ��� ⥬������ �� ����ᨩ � ��७����: \n");
                    celsius = lower;
                    while(celsius <= upper){
                        fahr = 9.0/5.0 * celsius + 32.0;
                        printf ("%3.0f\t%6.1f\n", celsius, fahr);
                        celsius = celsius + step;
                    }
                    break;
                }
                default:{
                    printf("�訡��! ������ \"f\", ��� \"c\"");
                }
                break;
            }
        }
}
