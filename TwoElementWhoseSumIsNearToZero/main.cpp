#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the number of test case: ";
    cin>>T;
    while(T--)
    {
        int i,current_sum, closest_sum = 999,l_index = 0,min_l_index = 0,N;
        cout<<"Enter the size of array: ";
        cin>>N;
        int r_index = N-1,min_r_index = N-1;
        int arr[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        sort(arr,arr+N);
        while(l_index<r_index)
        {
            current_sum = arr[l_index] + arr[r_index];
            if(abs(current_sum)<abs(closest_sum))
            {
                closest_sum = current_sum;
                min_l_index = l_index;
                min_r_index = r_index;
            }
            if (current_sum < 0)
                l_index++;
            else
                r_index--;
        }
        cout<<"Elements whose sum is closest to zero is "<<arr[min_l_index]<<" and "<<arr[min_r_index];
    }
    return 0;
}
