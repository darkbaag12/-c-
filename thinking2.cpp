#include <iostream>
#include <cmath>
class Point
{
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;

	}
	Point(int pos_x, int pos_y)
	{
		x = pos_x;
		y = pos_y;

	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;

	}
	int GetX() const
	{
	
		return x;
	}
	int GetY() const
	{
		return y;
	
	}

};

class Geometry
{
	Point* point_array[100] = {NULL};
	
	
public:
	int point_num;
	Geometry()
	{
		point_num = 0;
	}
	void AddPoint(const Point point)
	{
		point_array[point_num] = new Point(point.GetX(),point.GetY());
		point_num++;
	}
	void PrintDistance()
	{
		for (int i = 0; i < point_num - 1; i++)
			for (int j = i + 1; j <= point_num - 1; j++)
			{
				std::cout << i << "번째 점과 " << j << "번째 점 사이 거리는 " << sqrt(pow(point_array[j]->GetX() - point_array[i]->GetX(), 2)
					+ pow(point_array[j]->GetY() - point_array[i]->GetY(), 2)) << " 입니다." << std::endl;
			}
	
	}

	void PrintNumMeets();

};
int main()
{
	Geometry Geo;
	Point p0(-1, 4); 
	Point p1(-2, 5);
	Point p2(3, 4);
	Point p3(8, 10);
	Geo.AddPoint(p0);
	Geo.AddPoint(p1);
	Geo.AddPoint(p2);
	Geo.AddPoint(p3);
	Geo.PrintDistance();


}