#include <iostream> 
#include <stdio.h>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

//float rectangle_Area();
float rectangle_Area(float,float);

int maxNumber(int);
int derivativeOfAFunction();
void check_polydivisible(int );

int main()
{
	int choise;
	bool check = true;
	do{
		cout<<"\n1. Rectangle Area ";
		cout<<"\n2. Find the biggest number";
		cout<<"\n3. Derivative of a function";
		cout<<"\n4. Polydivisible Numbers";
		cout<<"\n5. Exit";
		cout<<"\nEnter choise: ";
		cin>>choise;
		switch(choise){
			case 1: float area,a,b;
					cout<<"Enter length  ";
					cin>>a;
					cout<<"Enter width  ";
					cin>>b;
					area =rectangle_Area( a, b);
					cout<< "Rectangle Area = "<<area<<endl;
					break;
			case 2: int n;
					cout<<" Enter number   ";
					cin>>n;
					cout<<maxNumber(n);
					break;
			case 3: //derivativeOfAFunction();
					break;
			case 4: int x;
					cout<<"Enter number  ";
					cin>>x;
					check_polydivisible(x);
					break;
			default: exit(0);
						break;
		}
	}while(check);


	return 0;
}

float rectangle_Area(float a,float b){
	float area;	
	area = a*b;
	return area;
}
	
int maxNumber(int x){
		int max=0;
		int tmp =x, last;
		while(tmp>0){
			last = tmp%10;  // lay chu so cuoi cung
			tmp/=10;        // bo chu so cuoi cung
			if(max<last){
				max = last;
			}
		}
		return max;	
}	
	
void check_polydivisible(int n)
{
    int N = n;
    vector<int> digit;
 
    // digit extraction of input number
    while (n > 0) {
 
        // store the digits in an array
        digit.push_back(n % 10);
        n /= 10;
    }
    reverse(digit.begin(), digit.end());
 
    bool flag = true;
    n = digit[0];
    for (int i = 1; i < digit.size(); i++) {
 
        // n contains first i digits
        n = n * 10 + digit[i];
 
        // n should be divisible by i
        if (n % (i + 1) != 0) {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << N << " is Polydivisible number.\n";
    else
        cout << N << " is Not Polydivisible number.\n";
}
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

