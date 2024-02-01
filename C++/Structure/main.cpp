#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int width;
    char x; // will assign 4 bytes but use 1 byte only. Inside structure padding of memory is done.
};
int main()
{
    struct Rectangle r1 = {1, 2};
    r1.length = 10;
    r1.width = 20;
    r1.x = 'A';
    cout<<r1.length<<" "<<r1.width<<" "<<r1.x<<endl;
    cout<<sizeof(r1);
    return 0;
}
