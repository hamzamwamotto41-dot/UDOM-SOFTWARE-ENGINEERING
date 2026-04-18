#include<iostream>
#include<string>
using namespace std;
int main()
{
bool finish=false;
double starting_balance; 
string item_name;
string done;
double item_price; 
double balance;
int item_quantity;
cout << "How much money do you have?" << endl;
cin >> starting_balance;
if(starting_balance>0)
{
while(finish==false && starting_balance>0)
{
cout << "Welcome, your balance is:"<< starting_balance << "TZS" << endl;
cout << "What do you want to buy?" << endl;
cin>>item_name;
cout << "How many units?" << endl;
cin >> item_quantity;
cout << "Enter item price" << endl;
cin>>item_price;
starting_balance-=(item_quantity*item_price);
if(starting_balance>=0)
{
cout<<"You have successfully purchased a/an "<<item_name<<", your current balance is:"<< starting_balance << " TZS";
cout << "have you finished purchasing? (Yes/No)" << endl;
cin >> done;
if(done=="Yes")
{
finish=true;
cout << "Thank you for purchasing with us." << endl;
}
}
else
{cout << "Unable to perform purchase, please increase your balance by: "<< -1*starting_balance << "TZS" << endl;}
}
}
else {cout << "Insufficient balance, go and top up your account or try something cheaper" << endl;}
return 0;
}