#include<iostream.h>
#include<conio.h>
class volume
{
	float e,r,h;
	public:
	void vol(float);
	void vol(float,float);
};
void volume::vol(float e)
{
	float c;
	c=e*e*e;
	cout<<"Volume Of Cube="<<c<<"cb cm"<<"\n\n";
}
void volume::vol(float r,float h)
{
	float c;
	c=3.14*r*r*h;
	cout<<"Volume Of Cylinder="<<c<<"cb cm"<<"\n\n";
}
int main()
{
	volume v;
	int choice;
	float a,b,c;
	cout<<"\t\t\t--:Volume Of Geometrical Shapes:--\n";
	cout<<"1-Volume Of Cube\n";
	cout<<"2-Volume Of Cylinder\n";
	cout<<"Enter Choice=";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nEnter Edge Of Cube=";
			cin>>a;
			v.vol(a);
		break;
		case 2:
			cout<<"\nEnter Radius Of Cylinder=";
			cin>>a;
			cout<<"\nEnter Height Of Cylinder=";
			cin>>b;
			v.vol(a,b);
		break;
		default:
			cout<<"Enter Right Choice\n\n";
	}
	return 0;
}