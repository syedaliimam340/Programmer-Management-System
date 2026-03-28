#include<iostream>
using namespace std;

class employee
{
private :
    int attempt=3;
    float salperhour;
    float hours;
    string email;
    string password;

    static int count ;

    int j_day,j_month,j_year;
    int c_day,c_month,c_year;

public:
    int exp;
    float monthlysal;
    float salary;
    string name;
    int id;

    void setdata1()
    {
        cout<<"\n====================================================\n";
        cout<<"               EMPLOYEE SETUP PANEL                 \n";
        cout<<"====================================================\n";

        cout<<"\nEnter the name of Employee   : ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter the employee ID        : ";
        cin>>id;

        cout<<"Enter working hours          : ";
        cin>>hours;

        cout<<"Enter pay per hour           : ";
        cin>>salperhour;

        cout<<"Enter email                  : ";
        cin>>email;

        cout<<"\n------------------ PASSWORD SETUP ------------------\n";
        do
        {
            cout<<"Enter password               : ";
            cin>>password;

            if(password.length()<=6)
            {
                cout<<"Password must be greater than 6 characters.\n";
            }
        }
        while(password.length()<=6);

        cout<<"Enter Joining Date (dd/mm/yyyy): ";
        char dummy;
        cin >> j_day >> dummy >> j_month >> dummy >> j_year;

        cout<<"Enter Current Date (dd/mm/yyyy): ";
        cin >> c_day >> dummy >> c_month >> dummy >> c_year;
    }

    void getsalary1()
    {
        salary = salperhour*hours;
        monthlysal=salary*30;
    }

    void showdata1()
    {
        cout<<"\n====================================================\n";
        cout<<"                 EMPLOYEE PROFILE                  \n";
        cout<<"====================================================\n";

        cout<<"Employee No        : "<<count<<endl;
        cout<<"Name               : "<<name<<endl;
        cout<<"Employee ID        : "<<id<<endl;
        cout<<"Email              : "<<email<<endl;
        cout<<" Daily Salary      : "<<salary<<endl;
        cout<<"Experience  : "<<exp<<" years\n";
        cout<<" Monthly Salary    : "<<monthlysal<<endl;


    }

    void getexperience()
    {
        exp=c_year-j_year;

        if(c_month<j_month)
        {
            exp--;
        }
        else if(c_month==j_month &&c_day<j_day )
        {
            exp--;
        }

        if(exp>=5)
            cout<<"Senior Level (A Rating)\n";
        else if ( exp >=3&&exp<5)
            cout<<"Associate Level (B+ Rating)\n";
        else if (exp>=1&&exp<3)
            cout<<"Newcomer (Rating in Progress)\n";
    }

    bool login()
    {
        cout<<"\n====================================================\n";
        cout<<"                    LOGIN PAGE                     \n";
        cout<<"====================================================";

        string e,p;

        while(attempt>0)
        {
            cout<<"\nEnter email    : ";
            cin>>e;
            cout<<"Enter password : ";
            cin>>p;

            if(e==email&&p==password)
            {
                cout<<"Login Successful\n";
                return true;
            }
            else
            {
                attempt--;
                cout<<"Access Denied. Attempts left : "<<attempt<<endl;
            }
        }
        return false;
    }
};

int employee::count=9090;

class programmer : private employee
{
private:
    string language ;
    string role;

public:

    void setdata2()
    {
        setdata1();

        cout<<"\nEnter specialized language   : ";
        cin>>language;
        cout<<"Enter role                   : ";
        cin>>role;
    }

    void showdata2()
    {
        getsalary1();
        getexperience();
        showdata1();

        cout<<"Speciality         : "<<language<<endl;
        cout<<"Role               : "<<role<<endl;

        cout<<"====================================================\n";
    }

    bool security()
    {
        return login();
    }
};

int main()
{
    int n;

    cout<<"====================================================\n";
    cout<<"           EMPLOYEE MANAGEMENT SYSTEM               \n";
    cout<<"====================================================\n";

    cout<<"\nEnter the number of Programmers: ";
    cin>>n;

    programmer e[n];

    for(int i=0; i<n; i++)
    {
        cout<<"\n---------------- Programmer #"<<i+1<<" Setup ----------------\n";
        e[i].setdata2();
    }

    cout<<"\n==================== LOGIN PORTAL ==================\n";

    for(int i=0; i<n; i++)
    {
        cout<<"\nProgrammer #"<<i+1<<" Login\n";
        cout<<"--------------------------------------------\n";

        if(e[i].security())
        {
            e[i].showdata2();
        }
        else
        {
            cout<<"Wrong Credentials\n";
        }
    }

    return 0;
}
