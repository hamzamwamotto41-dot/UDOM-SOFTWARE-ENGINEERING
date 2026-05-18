#include<iostream>
using namespace std;
int main(){
bool valid=false;
int option;
double fare;
double distance;
bool proper=false;
while(valid==false)
{
cout << "Welcome to our online Booking app" << endl;
cout << "Select your desired ride type" << endl;
cout << "1. Standard Ride (Base Fare: TZS. 3000)" << endl;
cout << "2. Premium Ride (Base Fare: TZS. 7000)" << endl;
cout << "3. Delivery Ride / Boda (Base Fare: TZS. 1500)" << endl;
cout << "4. Exit Menu" << endl;
cout << "Enter your option:" << endl;
cin >> option;
if(option>=1 && option<=4)
{
valid=true;
switch(option){
case 1:
fare=3000;
break;
case 2:
fare=7000;
break;
case 3:
fare=1500;
break;
case 4:
cout << "Thank you for coming." << endl;
return 0;
break;
}
}
else
{cout << "Invalid selection. Please enter a valid option." << endl;}
}
while(proper==false)
{
if(valid)
{
cout << "Enter the distance to destination in (km):" << endl;
cin >> distance;
if(distance>0)
{proper=true;}
else
{cout << "Improper distance has been entered. Please enter a valid value." << endl;}
}
}
switch(option){
case 1:
fare+=(500*distance);
break;
case 2:
fare+=(750*distance);
break;
case 3:
fare+=(1000*distance);
break;
}
cout << "The total cost to be paid is: TZS." << fare << endl;
return 0;
}