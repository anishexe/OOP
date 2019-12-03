#include<bits/stdc++.h>

using namespace std;
class Person{
	string addr;
	int HaveCar;
	string arr[4]={"pune","mumbai","banglore","chennai"};

	public:
	
	void accept()		//Accepting data for person
	{
		cout<<"Enter your address"<<endl;
		cin>>addr;
		transform(addr.begin(), addr.end(), addr.begin(), ::tolower); 		//converting address to lower case
		//cout<<arr[0];
		if(addr.compare(arr[0])!=0&&addr.compare(arr[1])!=0&&addr.compare(arr[2])!=0&&addr.compare(arr[3])!=0)		//comparing address and throwing exception
			throw(addr);
		cout<<"Enter 1 if you have 4 wheeler"<<endl;
		cin>>HaveCar;
		if(HaveCar!=1)			//if persong don't have 4 wheeler throw exception
			throw(HaveCar);
	}

};

int main()
{

	int ch;
	Person p;
	do
	{
		try		//try block...Exception handling
		{
			p.accept();
			cout<<"Perfect Data...Data Accepted..!"<<endl;	
		}
		catch(string str)	//catch block...Exception handling
		{
			cout<<"Invalid address"<<endl;
		}
		catch(int i)		//2nd catch block...Exception handling
		{
			cout<<"You Must have 4 wheeler..."<<endl;
		}

		cout<<"Enter 1 to continue"<<endl;
		cin>>ch;
	}while(ch==1);
return 0;
}
