#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void categer (c); //�������� �������

void main () {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char c, v;
    
    for (;;) {
    	printf("������ ����������� ��������\r\n");
    	printf("___________________________\r\n");
    	printf("   1   ����������   \r\n"); 
    	printf("   2   �������������   \r\n"); 
    	printf("   3   ���   \r\n"); 
    	printf("   4   ������� ����   \r\n"); 
    	printf("   5   �������� ����   \r\n"); 
    	printf("   6   ���������   \r\n"); 
    	printf("___________________________\r\n"); 
    	printf("�������� ����� �������   \r\n");
    	printf("___________________________\r\n");
    	
    	/*����� ����������� ������ ������ � ������,
    	������� ������ �������� ������ � ���� ������
    	�������� ��������� ����������. ������� fflush(stdin)
    	������� ����� �� ������ ��������, ������� �����
    	���������� ��������� scanf() ���� �����������
    	��������� ��������� ������.*/
    	
    	fflush(stdin);
    	scanf("%c", &c);
		
		categer (c);
		
    	printf("������ ���������� ������� (�/�) ?\r\n");
    	fflush(stdin);
    	scanf("%c", &v);
    	switch (v) {
    		case 'y':
    			exit(0); //�������� ����� � ��
    		case '�':
    			exit(0);
		}
	}
}
void categer (c){
	int i;
    float p, a, b, r, w, t;
    
	switch (c) {
        case '1':
            printf("����������\r\n������� ��������: ");
            scanf("%f", &p);
            printf("\r\n���������� �����������: \r\n");
            scanf("%i", &i);
            float ip = i * p * 0.2;
            printf("\r\n����� ������ - %f ���.\n", ip);
            break;
        case '2':
            printf("�������������\r\n���������� ���/���, �������������� �� �����: ");
            scanf("%f", &a);
            a = a * 0.09;
            printf("\r\n����� ������ - %f ���. \r\n", a);
            break;
        case '3':
           	printf("���\r\n���������� ����������, �������������� �� �����: ");
            scanf("%f", &b);
            b = b * 1.10;
            printf("\r\n����� � ������ - %f ���. \r\n", b);
			break;	
        case '4':
            printf("������� ����\r\n���������� ����������, �������������� �� �����: ");
            scanf("%f", &r);
            r = r * 1.79;
            printf("\r\n����� � ������ - %f ���. \r\n", r);
			break;	
        case '5':
            printf("�������� ����\r\n���������� ����������, �������������� �� �����: ");
            scanf("%f", &w);
            w = w * 0.43;
            printf("\r\n����� � ������ - %f ���. \r\n", w);
			break;	
        case '6':
            printf("���������\r\n����� ������� ��������: ");
            scanf("%f", &t);
            t = t * 0.42;
            printf("\r\n����� � ������ - %f ���. \r\n", t);
            break;
	}
}
