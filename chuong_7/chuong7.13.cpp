#include<iostream>
#include <fstream> 
using namespace std;
void outFile(int [],int);


int main()
{
	int data[100];
	int n;
	ifstream infile; 
    infile.open("text13.txt"); 
    if(!infile){
		cout<<"\n Error!";
		exit(0);
	}else {
		while(infile){
			
			
			}
		}
    infile.close(); 
    return 0;  
}
void outFile(int x[],int n){
	ofstream outfile; 
    outfile.open("text13.txt"); 


}


