// Calculate the sum of an array elements
#include<iostream>
using namespace std;
 main()
{
	int a,arr[a],sum=0;
	cout<<"enter the array list"<<endl;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<a;i++)
	{
		sum+=arr[i];
	}
	cout<<"the sum of array is:"<<endl;
	cout<<sum<<endl;
}