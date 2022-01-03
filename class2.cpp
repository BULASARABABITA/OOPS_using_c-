#include<iostream>
using namespace std;
class Box{
    public:
	double length;
	double breadth;
	double height;
	double volume(double h,double l,double b)
	{
		double volume;
		volume = h*l*b;
		return volume;
	}
};
int main()
{
	Box Box1;
	Box Box2;
	double box1_volume = 0.0,box2_volume = 0.0;
	double Box1_volume,Box2_volume;
	/*Box1 information*/
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;
	/*Box2 information*/
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;
	/*Volume of box1*/
	Box1_volume = Box1.volume(5,6,7);
	cout<<"Volume of Box1 " << Box1_volume<<endl;
        /*Volume of box2*/
	Box2_volume = Box2.volume(10,12,13);
	cout<<"Volume of Box2 " << Box2_volume<<endl;
	return 0;
}

	
