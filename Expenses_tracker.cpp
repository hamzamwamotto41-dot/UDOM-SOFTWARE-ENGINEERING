#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool finish=false;
    double starting_balance;
    string item_name[99];
    string temp_item_name[99];
    string done;
    done="No";
    double item_price[99];
    double temp_item_price[99];
    double balance;
    int item_quantity[99];
    int temp_item_quantity[99];
    int i; i=0;
    cout << "How much money do you have?" << endl;
    cin >> starting_balance;
    if(starting_balance>0)
    {
        while(finish==false && starting_balance>0)
        {
            while(done=="No" || done=="no")
            {
            cout << "What do you want to buy?" << endl;
            cin>> temp_item_name[i];
            cout << "How many units?" << endl;
            cin >> temp_item_quantity[i];
            cout << "Enter item price" << endl;
            cin>> temp_item_price[i];
            if(starting_balance>=(temp_item_quantity[i]*temp_item_price[i]))
            {
            item_name[i]=temp_item_name[i];
            item_quantity[i]=temp_item_quantity[i];
            item_price[i]=temp_item_price[i];
            starting_balance-=(item_quantity[i]*item_price[i]);
            cout << "Are you done?" << endl;
            cin >> done;
            i++;
            }
            else
            {
            cout << "Purchase was not successful due to insufficient balance" << endl;
            cout << "Would you still want to buy something cheaper?" << endl;
            cin >> done;
            }
            }
            if(starting_balance>=0)
            {
                cout << "Here is your receipt:" << endl;
                for(int j=0; j<i; j++)
                {
                cout<< item_quantity[j] << " unit of " <<item_name[j]<<", costing:"<< item_quantity[j]*item_price[j] << " TZS" <<endl;
                }
            }
            else
            {
                cout << "Unable to perform purchase, please increase your balance " << endl;
            }
            cout << "Your current balance is: " << starting_balance << "TZS" << endl;
            cout << "Ready for packaging? (Yes/No)" << endl;
            cin >> done;
            if(done=="Yes" || done=="yes")
            {
                finish=true;
                cout << "Thank you, and welcome again." << endl;
            }
            else{done="No";}
        }
    }
    else
    {
        cout << "Insufficient balance, go and top up your account or try something cheaper" << endl;
    }
    return 0;
}