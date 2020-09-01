#include<iostream>
using namespace std;
int main()
{
int marks[]={45,50,28,38};
int mathsmarks[4];

cout<<marks[0];
cout<<marks[1];
cout<<marks[2];
cout<<marks[3];

for(int i=0; i<4; i++)
{
    cout<<i<<marks[i];
}
   
    return 0;
}

