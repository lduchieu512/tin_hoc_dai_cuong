#include <iostream> 
#include <fstream> 
#include <iostream> 
using namespace std;

int main()
{
    int a[501];
    ifstream SoChan ("SoChan.txt");
    if(! SoChan.is_open())
    {
        cout<<"Khong the mo file.\n";
        return 0;
    }
    else {
        for(int i = 1; i <= 500; i++)
        {
            SoChan>>a[i];
        }
    }
    for(int i =1; i <= 500; i++)
    {
        cout<<a[i]<<" ";
    }
    SoChan.close();
    system("pause");
    return 0;
}
