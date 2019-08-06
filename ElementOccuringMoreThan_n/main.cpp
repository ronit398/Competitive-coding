#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int T;
    cout<<"Enter the number of test cases: ";
    cin>>T;
    while(T--)
    {
        long long int N,i,Count = 0;
        cout<<"\nEnter the number of element: ";
        cin>>N;
        long long int arr[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        sort(arr,arr+N);
        for(i=0;i<=N/2;i++)
        {
            if(arr[i] == arr[i+(N/2)])
                cout<<arr[i];
            else
                Count++;
        }
        if(Count == N/2+1)
            cout<<"No such Element";
    }
    return 0;
}
