#include <iostream>

int main()
{
using namespace std;

string name;
int age;

cout<<"Whats your age:";
cin>>age;

cout<<"Whats your name:";
getline(cin>>ws,name);

cout<<" Hello "<<name<<'\n';
cout<<" your age is "<<age<<'\n';


return 0;


}