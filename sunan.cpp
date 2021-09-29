#include<iostream>
#include<vector>
using namespace std;





struct Customer
{
    string customer_name;
    int customer_code;
    string account_type;
    float ammount_deposited;
    string adress;
    string email;
};

vector<Customer> v;

Customer AddData()
{
    Customer x;

    cout<<"Enter Name of Customer \n";
    cin>>x.customer_name;
    cout<<"Enter code of Customer n";
    cin>>x.customer_code;
    cout<<"Enter account type of Customer n";
    cin>>x.account_type;
    cout<<"Enter ammount depostided by Customer \n";
    cin>>x.ammount_deposited;
    cout<<"Enter contact adress  of Customer \n";
    cin>>x.adress;
    cout<<"Enter email-adress  of Customer \n";
    cin>>x.email;


    return x;
}

void EditData(Customer x)
{
    cout<<"Enter Name of Customer \n";
    cin>>x.customer_name;
    cout<<"Enter code of Customer \n";
    cin>>x.customer_code;
    cout<<"Enter account type of Customer \n";
    cin>>x.account_type;
    cout<<"Enter ammount depostided by Customer \n";
    cin>>x.ammount_deposited;
    cout<<"Enter contact adress  of Customer \n";
    cin>>x.adress;
    cout<<"Enter email-adress  of Customer \n";
    cin>>x.email;
}

void DeleteEntry()
{
    v.pop_back();
}


int main()
{

    float TotalAmmount=0;

    int n;
    int option;

    cout<<"How many datas do you want to add?\n";
    cin>>n;


    for(int i=0; i<n; i++)
    {
        Customer test;
        cout<<"1) ADD DATA"<<endl;
        cout<<"2) Edit DATA"<<endl;
        cout<<"3) Delete DATA"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            cout << "Add item";
            test=AddData();
            break;
        case 2:
            cout << "Edit Item";
            EditData(test);
            break;
        case 3:
            cout << "Delete Item";
            DeleteEntry();
            break;
        }

    }



}
