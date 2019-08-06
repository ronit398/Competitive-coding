#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the number of test case: ";
    cin>>T;
    while(T--)
    {
        int i,N,fixed,left,right,sum,findsum,flag = 0;
        cout<<"Enter the size of array: ";
        cin>>N;
        int arr[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        cout<<"Enter the sum of the triplet: ";
        cin>>findsum;
        sort(arr,arr+N);
        for(i=0;i<N;i++)
        {
            fixed = i;
            left = i+1;
            right = N-1;
            while(left<right)
            {
                sum = arr[fixed] + arr[left] + arr[right];
                if (sum == findsum)
                {
                    cout<<arr[fixed]<<" "<<arr[left]<<" "<<arr[right]<<"\n";
                    flag = 1;
                    break;
                }
                else if(sum > findsum)
                    right--;
                else if(sum < findsum)
                    left++;
            }
        }
        if (flag==0)
            cout<<"No such triplet";
    }
    return 0;
}
