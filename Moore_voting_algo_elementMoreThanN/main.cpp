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
        int arr[N];
        cout<<"Enter the elements: ";
        for(i=0;i<N;i++)
            cin>>arr[i];
        for(i=0;i<N;i++)
        voter = arr[0];
        votes = 1;
        for(i=1;i<N;i++)
        {
            if(arr[i]==voter)
                votes++;
            else
            {
                if(votes>0&&voter!=arr[i])
                    votes--;
                else
                {
                    voter = arr[i];
                    votes = 1;
                }
            }
        }
        for(i=0;i<N;i++)
            if(arr[i]==voter)
                Count++;
        if(Count>=(N/2)+1)
            cout<<voter;
        else
            cout<<"No such Element: ";
    }
    return 0;
}
