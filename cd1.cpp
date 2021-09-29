#include<iostream>

using namespace std;

bool isOperator(char c)
{
    if (c == '%' || c == '/' || c == '*' || c == '+' || c == '-')
    {
        return true;
    }
    else
        return false;
}

bool Lexical(string s)
{
    for(int i =1; i<s.size(); i+=2)
    {
        if(isOperator(s[i]) && !isOperator(s[i-1]) && !isOperator(s[i+1]))
        {

        }
        else
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                i++;
            }
            else
                return false;
        }
    }
    return true;
}



int main()
{
    int id=1;
    string s;
    cin>>s;

    if( Lexical(s) )
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                cout<<"( id"<<id<<" )";
                id++;
            }
            else
                cout<<"( "<<s[i]<<" )";
            }
        cout<<"\n";
    }
    else
    {
        cout<<"Not a valid lexical\n";
    }

}
