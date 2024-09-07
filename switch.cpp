#include<iostream>
using namespace std;
class Day
{
	private:
		int Day;
		public:
		   void set_data()
		   {
		   
		    cout<<"Enter no of day you want display";
			cin>>day;
	}
	void display_day()
	{
		switch(day)
		{
		
		case 1:
			cout<<"monday";
			break;
			case 2:
			cout<<"tuesday";
			break;
			case 3:
			cout<<"wednesday";
			break;
			case 4:
			cout<<"thursday";
			break;
			case 5:
			cout<<"friday";
			break;
			case 6:
			cout<<"saturday";
			break;
			case 7:
			cout<<"sunday";
			break;
			default: 
			cout<<"invalid";
			break;
		}
	}
};
main()
{
    Day d1;
    
    d1.set_data();
    d1.display_day();
    
    return 0;
}