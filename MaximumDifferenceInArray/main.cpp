#include <iostream>
using namespace std;
int MaxDifference(int *arr, int Size)
{
    int min_so_far = arr[0],i;
    int max_difference_so_far = arr[1] - arr[0];
    int Current_difference_so_far = arr[1] - arr[0];
    int index = Size;
    for(i=0;i<index;i++)
    {
        if(arr[i]<min_so_far)
            min_so_far = arr[i];
        else
        {
            Current_difference_so_far = arr[i] - min_so_far;
            if(Current_difference_so_far > max_difference_so_far)
                max_difference_so_far = Current_difference_so_far;
        }
    }
    return max_difference_so_far;
}
int main()
{
    int T;
    cout<<"Enter the number of Test Cases: ";
    cin>>T;
    while(T--)
    {
        int i,N;
        cout<<"Enter the size of array: ";
        cin>>N;
        int arr[N];
        cout<<"Enter the Elements in array: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        cout<<MaxDifference(arr,N);
    }
    return 0;
}

