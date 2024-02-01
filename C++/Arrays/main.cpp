#include <iostream>

using namespace std;

int main()
{
    int A[5]; // declaration
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[5] = {10,20,30,40,50}; //declaration and initialization
    int C[] = {10,20,30}; //declaration and initialization without size. size will be 12, 4 for each int
    int D[5] = {10,20,30}; //declaration and initialization with few elements. rest of the elements will be 0.

    cout<<"size: "<<sizeof(C)<<endl;
    cout<<A[1]<<endl;

    // Iterating using for loop
    for(int i=0; i < sizeof(B)/sizeof(int); i++)
    {
        cout<<"Element: "<<B[i]<<endl;
    }

    // Iterating using for each loop
    for(int x:A)
    {
        cout<<x<<endl;
    }

    // take size as input
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int Arr[size];
    for(int i=0; i < sizeof(Arr)/sizeof(int); i++){
        Arr[i] = i*2;
        cout<<"Value stored inside Arr index "<<i<<": "<<Arr[i]<<endl;
    }
    return 0;
}
