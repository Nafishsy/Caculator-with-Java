#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int r,c,sum;
    sum=0;
    cin>>r>>c;
    int arr[r+1][c+1]= {};

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    int i,j;

    for( i=0; i<r; i++)
    {
        for( j=0; j<c; j++)
        {
            sum+=arr[i][j];
        }

        arr[i][c] = sum;
        sum=0;
    }

    for( i=0; i<r; i++)
    {
        for( j=0; j<c; j++)
        {
            sum+=arr[j][i];
        }

        arr[r][i] = sum;
        sum=0;
    }

    for( i=0; i<r; i++)
    {
        for( j=i; j<c; j++)
        {
            sum+=arr[i][j];
            break;
        }
    }
    arr[r][c]=sum;


    for(i=0; i<r+1; i++)
    {
        for(j=0; j<c+1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
