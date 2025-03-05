#include <iostream>

using namespace std;

double avg(int arr[],int size)
{
    int sum=0;
    for(int i=0; i<=size ;i++)
    {
        sum=arr[i]+sum;
    }
    return sum;
}

int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0; i<=size ;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int max (int arr[],int size)
{
    int max=arr[0];
    for(int i=0; i<=size ;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int size=4;
    int arr[size];
    for(int i=0; i<=size ;i++)
{
      cin>>arr[i];
}
    cout<<"avg="<< avg(arr,size)<<endl;
    cout<<"max="<< max(arr,size)<<endl;
    cout<<"min="<< min(arr,size)<<endl;
    return 0;
}
