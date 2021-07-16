#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void categer (c); //Объявляю функцию

void main () {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char c, v;
    
    for (;;) {
    	printf("Расчёт комунальных платежей\r\n");
    	printf("___________________________\r\n");
    	printf("   1   Квартплата   \r\n"); 
    	printf("   2   Электричество   \r\n"); 
    	printf("   3   Газ   \r\n"); 
    	printf("   4   Горячая вода   \r\n"); 
    	printf("   5   Холодная вода   \r\n"); 
    	printf("   6   Отопление   \r\n"); 
    	printf("___________________________\r\n"); 
    	printf("Выберите форму расчёта   \r\n");
    	printf("___________________________\r\n");
    	
    	/*Когда считывается первый символ в потоке,
    	остаётся символ перевода строки и этот символ
    	хавается следующей переменной. Функция fflush(stdin)
    	очищает поток от лишних символов, поэтому когда
    	вызывается следующая scanf() есть возможность
    	прочитать следующий символ.*/
    	
    	fflush(stdin);
    	scanf("%c", &c);
		
		categer (c);
		
    	printf("Будете продолжать расчёты (Д/Н) ?\r\n");
    	fflush(stdin);
    	scanf("%c", &v);
    	switch (v) {
    		case 'y':
    			exit(0); //Объявляю выход в ОС
    		case 'н':
    			exit(0);
		}
	}
}
void categer (c){
	int i;
    float p, a, b, r, w, t;
    
	switch (c) {
        case '1':
            printf("Квартплата\r\nПлощадь квартиры: ");
            scanf("%f", &p);
            printf("\r\nКоличество проживающих: \r\n");
            scanf("%i", &i);
            float ip = i * p * 0.2;
            printf("\r\nСумма оплаты - %f грн.\n", ip);
            break;
        case '2':
            printf("Электричество\r\nКоличество кВт/час, использованных за месяц: ");
            scanf("%f", &a);
            a = a * 0.09;
            printf("\r\nСумма оплаты - %f грн. \r\n", a);
            break;
        case '3':
           	printf("Газ\r\nКоличество кубометров, использованных за месяц: ");
            scanf("%f", &b);
            b = b * 1.10;
            printf("\r\nСумма к оплате - %f грн. \r\n", b);
			break;	
        case '4':
            printf("Горячая вода\r\nКоличество кубометров, использованных за месяц: ");
            scanf("%f", &r);
            r = r * 1.79;
            printf("\r\nСумма к оплате - %f грн. \r\n", r);
			break;	
        case '5':
            printf("Холодная вода\r\nКоличество кубометров, использованных за месяц: ");
            scanf("%f", &w);
            w = w * 0.43;
            printf("\r\nСумма к оплате - %f грн. \r\n", w);
			break;	
        case '6':
            printf("Отопление\r\nОбщая площадь квартиры: ");
            scanf("%f", &t);
            t = t * 0.42;
            printf("\r\nСумма к оплате - %f грн. \r\n", t);
            break;
	}
}
