#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    bool isPrime=true;
    bool isValid=false;
    cout << "Enter your number" << endl;
    cin >> num;
    if(num>2)
    {
        isValid=true;
    }
    else if(num==2)
    {
        isPrime=true;
    }
    else if(num==1)
    {
        isPrime=false;
    }
    else
    {
        cout << "The number entered is invalid" << endl;
        return 0;
    }
    if(isValid==true)
    {
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime==true)
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is not prime" << endl;
    }
    return 0;
}