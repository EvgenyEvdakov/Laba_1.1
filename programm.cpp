
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int year, month;
	year = 2022;
	month = 9;
	printf("������ %d ���\n", year, month)
}

