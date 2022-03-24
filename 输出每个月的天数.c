#include<stdio.h> 
int MonthDays(int year, int month);
//函数调用前应先声明，或者先定义再调用// 
int main(void)
{
	int year,month,ndays;
	scanf("%d",&year);

	for(month=1;month<=12;month++)
	{	
	ndays=MonthDays(year,month);//作为for循环体语句中的一部分// 
	printf("%d",ndays);
	}
	return 0;
	
}
int MonthDays(int year, int month)//形参在接受实参时是变量(存储数据的单元），执行被调函数的语句时作为常量对待// 
{
	
	switch(month)
{   //break语句这里可有可无，遇到break语句执行并跳过switch语句;default可省略，当month没有匹配的时候， 什么也不执行。// 
	case 1:
	case 3:
    case 5:
	case 7:
	case 8:
    case 10:
	case 12:
    return 31;//return表示结束函数的运行，带着表达式的值或常量的值返回主调函数// 
	case 4:
	case 6:
	case 9:
	case 11:
    return 30;
	case 2:
	if((year%4==0&&year%100!=0)||(year%400==0))  return 29;
	else  return 28;
}
}




