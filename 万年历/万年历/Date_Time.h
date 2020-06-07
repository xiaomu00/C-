#ifndef _DATE_TIME_H_
#define _DATE_TIME_H_

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<assert.h>
using namespace std;


//����
struct Date
{
	int m_year;
	int m_month;
	int m_day;
};
//ʱ��
struct Time
{
	int m_hour;
	int m_minute;
	int m_second;
};



//��������
class Date_Time;
ostream& operator<<(ostream &out, const Date_Time &dt);
//���n���Ǽ��¼���
void NextDateTime();
//�ж�ĳ���Ƿ�������
bool Judgment_Leap_year(int year);



class Date_Time
{
	//��Ԫ��������
public:
	friend ostream& operator<<(ostream &out, const Date_Time &dt);
	friend void NextDateTime();

public:
	Date_Time();



	//��������غ�������
public:
	int operator-(const Date_Time& dt);
	Date_Time& operator++();
	Date_Time& operator--();
	Date_Time operator++(int);
	Date_Time operator--(int);
	Date_Time& operator+=(int n);
	Date_Time& operator-=(int n);


	bool operator==(const Date_Time& dt);
	bool operator!=(const Date_Time& dt);
	bool operator>(const Date_Time& dt);
	bool operator<(const Date_Time& dt);
	bool operator>=(const Date_Time& dt);
	bool operator<=(const Date_Time& dt);



	//���ܺ�������
public:
	//��ȡ��ǰʱ��
	Date_Time getcordatetime();

	void cin_date();

	//��ʾ��ǰʱ��
	void showdatetime();

	//�ж��������ڵĺϷ���
	bool Legitimacy_day(int year, int month, int day);

	//��ĳ��ĳ��ĳ�������ڼ�
	int GetWeekByYMD(int year, int month, int day);

	//��ĳ��ĳ��ĳ���Ǳ���ĵڼ���
	int Getsum_day(int year, int month, int day);

	//��̬��ʾ��������ʱ��
	void DateCalendar_Time();



	
	//��ǰn���Ǽ��¼���
	Date_Time PrevDateTime(int n);
	



	//���Ա
private:
	Date m_date;
	Time m_time;
	int* m_run;
	int* m_ping;
};

#endif /*DATE_TIME_H_*/