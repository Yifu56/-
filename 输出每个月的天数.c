#include<stdio.h> 
int MonthDays(int year, int month);
//��������ǰӦ�������������ȶ����ٵ���// 
int main(void)
{
	int year,month,ndays;
	scanf("%d",&year);

	for(month=1;month<=12;month++)
	{	
	ndays=MonthDays(year,month);//��Ϊforѭ��������е�һ����// 
	printf("%d",ndays);
	}
	return 0;
	
}
int MonthDays(int year, int month)//�β��ڽ���ʵ��ʱ�Ǳ���(�洢���ݵĵ�Ԫ����ִ�б������������ʱ��Ϊ�����Դ�// 
{
	
	switch(month)
{   //break���������п��ޣ�����break���ִ�в�����switch���;default��ʡ�ԣ���monthû��ƥ���ʱ�� ʲôҲ��ִ�С�// 
	case 1:
	case 3:
    case 5:
	case 7:
	case 8:
    case 10:
	case 12:
    return 31;//return��ʾ�������������У����ű��ʽ��ֵ������ֵ������������// 
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




