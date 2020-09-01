#include<iostream>
using namespace std;
struct rollex
{
    /* data */
    int price;
    char quality;
    int weight;
};
int main(){
    struct rollex alakh;
    struct rollex jayesh;
    alakh.price=200000;
    alakh.quality='q';
    alakh.weight=70;
    cout<<alakh.price;
    cout<<alakh.quality;
    cout<<alakh.weight;
    jayesh.price=300000000;
    jayesh.quality='b';
    jayesh.weight=65;
    cout<<jayesh.price;
    cout<<jayesh.quality;
    cout<<jayesh.weight;
return 0; }

