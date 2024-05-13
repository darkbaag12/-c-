#include <iostream>
class Date 
{

	int year_;
	int month_;// 1부터 12까지
	int day_; //1부터 31까지
public:
	void SetDate(int year, int month, int date)
	{
		year_ = year;
		month_ = month;
		day_ = date;
	
	}
	void AddDay(int inc)
	{
		day_ += inc;
		if (month_ == 2)
		{
			
			if (day_ >= 28)
			{
				day_ %= 28;
				AddMonth(day_ / 28);
			}
		}
		else if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12)
		{
			
			if (day_ >= 31)
			{
				day_ %= 31;
				AddMonth(day_ / 31);
			}
		}
		else
		{
			if (day_ >= 30)
			{
				day_ %= 30;
				AddMonth(day_ / 30);
			}
		}
	}
	void AddMonth(int inc)
	{
		month_ += inc;
		if (month_ > 12)
		{
			month_ -= 12;
			year_ += 1;
		}
	}
	void AddYear(int inc)
	{
		year_ += inc;
	
	
	}
	void ShowDate()
	{
		std::cout << year_ <<" " << month_ <<" " << day_ << std::endl;
	}

};
int main()
{
	Date abc;
	int a, b, c;
	std::cout << "날짜를 입력하세요. ";
	std::cin >> a >> b >> c;
	abc.SetDate(a, b, c);
	abc.AddDay(20);
	abc.ShowDate();
	abc.AddYear(4);
	abc.ShowDate();
	abc.AddMonth(3);
	abc.ShowDate();
	abc.ShowDate();

}

//1월 20일 + 15일