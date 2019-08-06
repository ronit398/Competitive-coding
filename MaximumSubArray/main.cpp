 #include <iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter the number of test case: ";
    cin>>T;
    while(T--)
    {
        int N,i,current_max;
        cout<<"\nEnter the size of array: ";
        cin>>N;
        int arr[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        current_max = arr[0];
        for(i=1;i<N;i++)
        {
            if(arr[i-1]>0)
                arr[i] = arr[i] + arr[i-1];
            current_max = max(current_max,arr[i]);
        }
        cout<<"Maximum sub array sum is: "<<current_max;
    }
    return 0;
}
