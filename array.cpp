#include<iostream>
using namespace std;
int main()
{
int marks[]={45,50,28,38};
int mathsmarks[4]; //Array made 

cout<<marks[0];
cout<<marks[1];
cout<<marks[2];
cout<<marks[3];

for(int i=0; i<4; i++)
{
    cout<<i<<marks[i]; //Output 
}
   
    return 0;
}

