#include <iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the number of test cases: ";
    cin>>T;
    while(T--)
    {
        int i,N,votes = 0,voter,Count = 0;
        cout<<"\nEnter the number of Elements in array: ";
        cin>>N;
        int arr[N],result;
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        result = arr[0];
        for(i=1;i<N;i++)
            result = result ^ arr[i];
        cout<<result;
    }
    return 0;
}
