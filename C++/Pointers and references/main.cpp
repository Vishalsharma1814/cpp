#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout<<a<<endl;
    cout<<p<<endl; // address of a
    cout<<*p<<endl; // value of a

    //pointer to an array
    int B[5] = {2,3,4,5,6};
    int *pt;
    pt = B;

    for(int i = 0; i < 5; i++)
    {
        cout<<pt[i]<<endl;
    }

    // Array in heap using pointer
    int *ptr;
    ptr = new int[5];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 60;

    for(int i=0; i < 5; i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete [] ptr; // to avoid memory leak

    // all pointers will take same amount of memory
    int *p1;
    char *p2;
    float *p3;
    double *p4;

    // assignment is different from reference. if int re = ref then it's assigning not referencing
    int ref = 10;
    int &re = ref;
    cout<<re; //10

    return 0;
}
