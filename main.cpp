#include <iostream>

using namespace std;

int main()
{
float price,rate,years,y,x;
int i=0;
cin>>price>>rate>>years;
 while(i<years)
  {
    y=rate/100;
    x=y*price;
    price=price+x;
    i++;

  }
 cout<<price;
}
