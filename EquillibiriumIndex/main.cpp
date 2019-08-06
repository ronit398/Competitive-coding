#include <iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the number of test case: ";
    cin>>T;
    while(T--)
    {
        int i,N,sum1 = 0,sum2 = 0;
        cout<<"Enter the size of array: ";
        cin>>N;
        int arr[N],leftSum[N],rightSum[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        sum1 = arr[0];
        leftSum[0] = arr[0];
        for(i=1;i<N;i++)
        {
            sum1 = sum1 + arr[i];
            leftSum[i] = sum1;
        }
        sum2 = arr[N-1];
        rightSum[N-1] = arr[N-1];
        for(i=N-2;i>=0;i--)
        {
            sum2 = sum2 + arr[i];
            rightSum[i] = sum2;
        }
        for(i=0;i<N-1;i++)
            if(leftSum[i] == rightSum[i+1])
                break;
        cout<<"Equillibirium Index is "<<i+1;
    }
    return 0;
}
