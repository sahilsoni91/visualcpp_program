#include<iostream.h>
class hello
{
	int a,b;
public:
	hello(int,int);
	void display()
	{
		cout<<"a="<<a<<"\n";
		cout<<"b="<<b<<"\n";
	}
};
hello::hello(int x,int y)
{
	a=x;
	b=y;
}
int main()
{
	int p,q;
	float m,n;
	cout<<"Enter Value of a=";
	cin>>p;
	cout<<"Enter Value of b=";
	cin>>q;
	cout<<"Enter Value of a=";
	cin>>m;
	cout<<"Enter Value of b=";
	cin>>n;
	hello j(p,q);
	hello k=hello(m,n);
	cout<<"Object 1:"<<"\n";
	j.display();
	cout<<"Object 2:"<<"\n";
	k.display();
	return 0;
}