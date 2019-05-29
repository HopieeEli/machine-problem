#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double h, a, o, x, y, z, area, perimeter, apothem, circumcenter;
	
	cout << " enter the hypotenuse side measurement \n";
	cin >> h;
	cout << " enter the opposie side measurement \n";
	cin >> a;
	cout << " enter the adjacent side measurement \n";
	cin >> o;
	

	x = acos(((o * o) + ( a * a) - (h * h)) / (2 * (o * a))) * (180 / 3.1415);
	y = acos(((a * a) + ( h * h) - (o * o)) / (2 * (h * a))) * (180 / 3.1415);
	z = acos(((h * h) + ( o * o) - (a * a)) / (2 * (o * h))) * (180 / 3.1415);
	

	
	
	
	perimeter = ((h + o + a) / 2);
	area = sqrt(perimeter * ( perimeter - a) * ( perimeter - h) * ( perimeter - o));
	
	apothem = h / (2 * (tan(180/3)));
	circumcenter = apothem / 2;
	
	cout << "the angles are\n" << x << " degrees\n";

	cout << y << " degrees\n";

	cout << z << " degrees\n";
	
cout << " \n";
	
	cout << "the perimeter of the triangle is " << perimeter << "\n";
	cout <<"\n";
	cout << "the area of the triangle is " << area << "\n";
		

		
{
		if(h == o && o == a )
		cout <<"the triangle is equilateral";	
		
	else if(h == a || o == a || h == o)
		cout <<"the triangle is adjacent";	
		
	else 
		cout <<"the triangle is scalene";
}
cout <<"\n";
cout <<"\n";
cout << " \n";		
		
{
	if( x == 90 || y == 90 || z == 90)
		cout << "the triangle is a right triangle";
		
	else if( z > 90)
		cout <<"the triangle is an obtuse triangle";
		
	else
		cout <<"the triangle is an acute triangle";
}
cout << " \n";
cout << " \n";

cout << "the apothem is " << apothem << "\n";
cout << "the circumcenter is " << circumcenter << "cm away from the base " "\n";	
	
	
	getch();
	return 0;
}
