#include <iostream>
using namespace std;
class time_
{
private:
	int h, m, s;
public:

	void setH(int a)
	{
		if (a > 23 || a < 0)
			h = 0;
		else
			h = a;
	}
	void setM(int b)
	{
		if (b > 59 || b < 0)
			m = 0;
		else
			m = b;
	}
	void setS(int b)
	{
		if (b > 59 || b < 0)
			s = 0;
		else
			s = b;
	}
	int getH() { return h; }
	int getM() { return m; }
	int getS() { return s; }
	void setTime(int a, int b, int c)
	{
		setH(a);
		setM(b);
		setS(c);
	}

	void printTime() {
		if (h < 10) cout << "0";
		cout << h << ":";
		if (m < 10) cout << "0";
		cout << m << ":";
		if (s < 10) cout << "0";
		cout << s << endl;
	}
	void addH()
	{
		h++;
		if (h == 24)
			h = 0;
	}
	void addM()
	{
		m++;
		if (m == 60) {
			addH();
			m = 0;
		}
	}
	void addS() {
		s++;
		if (s == 60) {
			addM();
			s = 0;
		}
	}
	void setHour(int a)
	{
		int k = 0;		
		k = (a + h) / 24;		
		h += a - k * 24;
	}
	void setMinute(int b) 
	{
		int k = 0;
		k = (m + b) / 60;
		setHour(k);
		m += b - k * 60;
	}
	void setSecond(int c)
	{
		int k = 0;
		k = (s + c) / 60;
		setMinute(k);
		s += c - k * 60;
	}
};
void main()
{
	time_ t;
	t.setTime(12, 5, 5);
	t.setHour(4);
	t.setMinute(5);
	t.setSecond(10);
	t.printTime();
	
	system("pause");
}