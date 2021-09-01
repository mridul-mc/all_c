#include<iostream>
#include<conio.h>
using namespace std;

class teacher
{
	private:
		int n;
	public:
		void get()
		{
			cout<<"Enter a number:";
			cin>>n;
		}
		void show()
		{
			cout<<n<<endl;
		}
};

int main()
{
	cout<<"Hello"<<endl;
	cin>>n;
}
