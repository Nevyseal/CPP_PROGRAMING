#include<iostream>
using namespace std;
struct Netpay
{
	double gross_pay, net_pay, tax_amount;
};
int main()
{
	Netpay Nt1;


	cout<<"\nEnter the gross_pay ->";
	cin>>Nt1.gross_pay;


   if(Nt1.gross_pay > 40000)
   {
   	Nt1.tax_amount = Nt1.gross_pay * 30/100
   	Nt1.net_pay = Nt1.gross_pay - Nt1.tax_amount;

   	cout<<"\ntax_amount ="<<Nt1.tax_amount<<" and "<<" net_pay ="<<Nt1.net_pay;
   }
   else if((Nt1.gross_pay >=30000 )   &&   (Nt1.gross_pay < 40000))
   {

	Nt1.tax_amount = Nt1.gross_pay * 25/100;
   	Nt1.net_pay = Nt1.gross_pay - Nt1.tax_amount;

   	cout<<"\ntax_amount ="<<Nt1.tax_amount<<" and "<<" net_pay ="<<Nt1.net_pay;
   }
   else if((Nt1.gross_pay >= 20000 )    && (Nt1.gross_pay  < 30000))
   {
   	Nt1.tax_amount = Nt1.gross_pay * 15/100;
   	Nt1.net_pay = Nt1.gross_pay - Nt1.tax_amount;

   	cout<<"\ntax_amount ="<<Nt1.tax_amount<<" and "<<" net_pay ="<<Nt1.net_pay;
   }
   else if((Nt1.gross_pay >= 10000)     (Nt1.gross_pay < 2000)
   {
   	Nt1.tax_amount = Nt1.gross_pay * 10/100;
   	Nt1.net_pay = Nt1.gross_pay - Nt1.tax_amount;

   	cout<<"\ntax_amount ="<<Nt1.tax_amount<<" and "<<" net_pay ="<<Nt1.net_pay;
   }


}
 

