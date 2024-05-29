
#include <iostream>
using namespace std;
class myString {
	//클래스를 구현하십시오
private:
	char* str;
	int len;
public:
	myString() { str = NULL; len = 0; }
	myString(char*);
	myString(const myString&);
	myString& operator ++(); //전위
	myString& operator ++(int x); // 후위
	myString& operator *(myString);
	myString& operator =(myString&);
	void myPrint();
	~myString() {
		if (str)
			delete[] str;
	}
};
myString::myString(char* c)
{
	len = strlen(c);
	str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		str[i] = c[i];
	}
	str[len] = '\0';
}
myString::myString(const myString& temp)
{
	len = strlen(temp.str);
	str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		str[i] = temp.str[i];
	}
	str[len] = '\0';

}
myString& myString::operator ++()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = str[i] + 1;
	}
	return *this;


}
myString& myString::operator ++(int x)
{
	myString temp=*this;

	for (int i = 0; i < temp.len; i++)
	{
		str[i] = str[i] + 1;
	}
	return temp;
}
myString& myString::operator *(myString c)
{
		int len2 = strlen(str) + strlen(c.str);
		char* temp = new char[len2 + 1];
		int a = 0, b = 0;
		for (int i = 0; i < len2; i++)
		{
			if (i % 2 == 0)//짝수번째에는 str의 문자가 들어간다
			{
				temp[i] = str[a];
				a++;
			}
			else if (i % 2 != 0)//홀수번째에는 c.str의 문자가 들어간다
			{
				temp[i] = c.str[b];
				b++;
			}
		}
		temp[len2] = '\0';
		delete[]str;
		len = len2;
		str = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			str[i] = temp[i];
		}
		str[len] = '\0';
		delete[] temp;
		return *this;
}

myString& myString::operator =(myString& c)
{
	if (str)
		delete[] str;
	len = c.len;
	str = new char[len+1];
	for (int i = 0; i < len; i++)
	{
		str[i] = c.str[i];
	}
	str[len] = '\0';
	return *this;
}
void myString::myPrint()
{
	for (int i = 0; i < len; i++)
	{
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	myString str1((char*)"HonGik");
	myString str2((char*)"ace");
	myString str3((char*)"bdf");
	str1++;
	str1.myPrint();
	str3 = str2 * str3;
	str3.myPrint();
}
