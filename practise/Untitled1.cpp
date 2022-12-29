#include<iostream>
using namespace std;
class item
{
private:

	int item_code,price,quantity,total_cost,discount,net;
	int j , n ,total_net = 0;

public:
    void get_data();
    void calculate();
    void output();
};
int main()
{

	 item item1[1000];

	 item1[1000].get_data();
	 item1[1000].calculate();
	 item1[1000].output();
}


void item::get_data()
{

    cout<<"Enter the number of items to deal with : ";
	cin>>n;

	for(j = 0; j < n; j++)
	{
		cout<<"\nEnter item "<<j + 1<<"code : ";
		cin>>item_code;

		cout<<"Enter the price of item "<<j + 1<<" : ";
		cin>>price;

		cout<<"Enter the Quantity of item "<<j + 1<<" : ";
		cin>>quantity;

		cout<<"\n\n\n" ;

}
}
void item::calculate()
{

    total_cost = price * quantity;

		if(total_cost > 20000)
		{
			discount = (14/100.0) * total_cost;
			net = total_cost - discount;
		}
		else if(total_cost >= 10000 && total_cost <= 20000)
		{
			discount = (10/100.0) * total_cost;
			net = total_cost - discount;
		}
		else
		{
			discount = 0;
			net = total_cost;
		}
		total_net = total_net + net;

}
void item::output()
{

    cout<<"\n\n";
	cout<<"\nItem Code\tPrice\t\tQuantity\tTotal Cost\tDiscount\tNet Cost";


	for(j = 0; j < n; j++)
	{
		cout<<"\n"<<item_code<<"\t\t"<<price<<"\t\t"<<quantity<<"\t\t"<<total_cost<<"\t\t"<<discount<<"\t\t"<<net;
	}

	cout<<"\n\n\n";
	cout<<"\nTotal amount payable is : "<<total_net<<" \n";
	cout<<"\n\n";

}
