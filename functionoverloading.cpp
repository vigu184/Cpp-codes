#include<iostream>
using namespace std;

int sum(int a,int b){ 
return a+b;
}
int sum (int a,int b ,int c)
{
    return a+b+c;
}
int volume(double r , int h){
    return(3.14*r*r*h);
}
   int volume (int a){
       return a*a*a;
   }
   int main()
   { 
   cout<<sum(3,7)<<endl;
    cout<<sum(3,7,6)<<endl;
     cout<<volume(3,7)<<endl;
      cout<<volume(3)<<endl;
    

    return 0;
}

