#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<row;col++)
        {
            for(int i=1;i<=5-row;i++)
            {
                cout<<" "<<" ";
            }
            cout<<"*"<<" ";
    
        }
        cout<<endl;
    }
}