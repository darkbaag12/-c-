#include <iostream>
class Date 
{
private:
	int year_;
	int month_;
	int day_;
public:
	void ShowDate();
	Date()//�⺻ ������
	{
		std::cout << "�⺻������ ȣ��!!" << std::endl;
		year_ = 2012;
		month_ = 5;
		day_ = 3;
	}
	Date(int a, int b, int c)
	{
		std::cout << "���ڰ� 3���� ������ ȣ��!!" << std::endl;
		year_ = a;
		month_ = b;
		day_ = c;
	}

};
void Date::ShowDate()
{
	std::cout << year_ << " " << month_ << " " << day_ << " " << std::endl;
}



int main()
{

	Date date;
	Date date2(2010, 3, 20);
	date.ShowDate();
	date2.ShowDate();





}