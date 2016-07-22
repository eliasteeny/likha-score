#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()

{ 
	int a, b, c, d, t = 0, y = 0, u = 0, i = 0, k = 0, f;
   
	string ab, ac, ae, ad;

    cout << "FIRST NAME :";
	cin >> ab;
	cout << "SECOND NAME :";
	cin >> ac;
	cout << "THIRD NAME :";
	cin >> ae;
	cout << "FORTH NAME :";
	cin >> ad;
 while(t<101 && u<101 && y<101 && i<101)
   {
 do
{
	 if (k == 0){

		 cout << "Give this round's scores " << endl;
		 cout << "score " << ab << ": ";
		 cin >> a;

		 cout << endl << "score " << ac << ": ";
		 cin >> b;

		 cout << endl << "score " << ae << ": ";
		 cin >> c;
		 cout << endl << "score " << ad << ": ";
		 cin >> d;
	 }
	 else
	 {
		 cout << "the sum of the score is different from 36 please correct " << endl;
		 cout << "score " << ab << ": ";
		 cin >> a;

		 cout << endl << "score " << ac << ": ";
		 cin >> b;

		 cout << endl << "score " << ae << ": ";
		 cin >> c;
		 cout << endl << "score " << ad << ": ";
		 cin >> d;
	 }
	 k++;
 
 }while(a+b+c+d!=36);
f = 0;
if (a + b + c == 0){ d++; f = 1; }
if (b + c + d == 0){ a++; f = 2; }
if (a + b + d == 0){ c++; f = 3; }
if (a + c + d == 0){ b++; f = 4; }

	t=t+a;
	y=y+b;
	u=u+c;
	i=i+d;
	k = 0;

		
	
	cout <<"------------------------------"<<endl << endl << endl  << endl <<setw(15)<< ab << " = " << t;
	if (f == 2)
		cout << " (Added 1 for getting a score = 36)";
	cout << endl << setw(15) << ac << " = " << y;
	if (f==4)
		cout << " (Added 1 for getting a score = 36)";
	cout << endl << setw(15) << ae << " = " << u;
	if (f==3)
		cout << " (Added 1 for getting a score = 36)";
	cout << endl << setw(15) << ad << " = " << i;
			if (f==1)
				cout << " (Added 1 for getting a score = 36)";
			cout << endl  << endl  << endl  << endl << "------------------------------"<<endl;
	
 } 
 
 if( ( t>=101 && t>i && t>y ) || ( u>=101 && u>i && u>y ) )
	 cout<<ab<<" and "<<ae<<" Lost";
 if ((i >= 101 && i>t && i>u) || (y >= 101 && y>t && y>u))
	 cout<<ac<<" and "<<ad<<" Lost";
 cout << endl;
 system("pause");
 
}

