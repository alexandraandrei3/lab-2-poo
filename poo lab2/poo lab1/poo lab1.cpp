// poo lab1.cpp : Defines the entry point for the console application.
//

/*#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int n, x[100];
cin >> n;
for (int i=0; i<n; i++)
cin >> x[i];
int max = x[0], min = x[0];
for (int i=1; i<n; i++)
{
if (min > x[i])
min = x[i];
if (max < x[i])max = x[i];
}
cout << "minimul este: " << min << endl;
cout << "maximul este: " << max << endl;
_getch();
return 0;
}*/


#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int n, a , b, c, x;
cout<<"numarul n este: ";
cin>>n;
a=n<<3;
b=n>>2;
c=(n<<3)+(n<<1);
cout<<n<<"*8="<<a<<endl;
cout<<"catul impartirii lui "<<n<<" la 4 este "<<b<<endl;
cout<<n<<"*10="<<c<<endl;
if ((n & 1) == 0)
	cout<<"numarul este par";
else
	cout<<"numarul este impar";
cout<<endl<<"x este: ";
cin>>x;
int bit = x & (1 << n);
cout<<"bitul n din x: "<<bit<<endl;
int x1;
x1 &= ~(1 << n);
cout<<x1;
cin>>int y>>int z;
y=y+z;
z=y-z;
y=y-z;
cout<<"numerele interschimbate sunt "<<y<<" "<<z;
cin>>int ybiti>>int zbiti;
ybiti=ybiti ^zbiti;
zbiti=ybiti^zbiti;
ybiti=ybiti^zbiti;
cout<<"numerele interschimbate folosind operatiile pe biti sunt "ybiti<<" "<<zbiti;
_getch();
return 0;
}


