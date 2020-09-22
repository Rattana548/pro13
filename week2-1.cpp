#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Displaymenu();
float Area(const float redius);
float Area(const float lenght,const float width);
float Area(const double based,const double height);
int main()
{	
	char Choice;
	bool Flag = true;
	do{
		Displaymenu();
		cin >> Choice;
		if(Choice == '1')
		{	
			float redius;
			cout << "\nEnter radius : ";
			cin >> redius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(redius) << endl;
		
		}
		else if(Choice == '2')
		{
			float lenght,width;
			cout << "Enter lenght and width : ";
			cin >> lenght >> width;
			cout << "Area of rectangle = " << fixed;
			cout << setprecision(2) << Area(lenght,width) << endl;
		
		}
		else if(Choice == '3')
		{
			double based,height;
			cout << "Enter based and height : ";
			cin >> based >> height;
			cout << "Area of triangle = " << fixed;
			cout << setprecision(2) << Area(based,height) << endl;
		
		
		}
		else if(Choice == '4') Flag = false;
		else 
		{	
			cout << "\nYou choose out of range is : ";
			cout << "not Process.\n";
		}
	
	
	}while(Flag);
	cout << "\n.....Exit Program....\n";
	return 0;
}
void Displaymenu()
{	cout << endl;
	cout << "Program Calculate Area" <<endl;
	cout << "1. Clrcle" <<endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choose number : ";

}
float Area(const float redius)
{
	return (3.14159F*redius*redius);
}
float Area(const float lenght,const float width)
{
	return (lenght*width);
}
float Area(const double based,const double height)
{
	return (0.5*based*height);
}