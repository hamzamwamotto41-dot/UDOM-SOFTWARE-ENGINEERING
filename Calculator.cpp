#include<iostream>
using namespace std;
int main(){
double num1,num2,output;
char operation;
bool valid=true;
cout << "Enter you numbers with the operation" << endl;
cout << "Enter the first number" << endl;
cin >> num1;
cout << "Enter the operator" << endl;
cin >> operation;
cout << "Enter the second number" << endl;
cin >> num2;
switch(operation){
case '+':
output=num1+num2;
break;
case '-':
output=num1-num2;
break;
case '*':
output=num1*num2;
break;
case '/':
if(num2!=0)
{
output=num1/num2;
}
else {
valid=false;
cout << "Math error" << endl;
}
break;
default:
valid=false;
cout << "Invalid operator" << endl;
}
if(valid)
{
cout << "The result is:" << output << endl;
}
return 0;
}