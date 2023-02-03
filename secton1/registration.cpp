#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login ();
void registration();
void forgot();

int main()
{

    int c;
    cout<<"\t\t\t_________________________________\n\n\n";
    cout<<"\t\t\t     Welcome to the Login Page   \n\n\n";
    cout<<"\t\t\t_______        MENU    __________\n\n";
    cout<<"                                         \n\n";
    cout<<"\t| Press 1 to Login              |"<<endl;
    cout<<"\t| Press 2 to Register           |"<<endl;
    cout<<"\t| Press 3 if forgot Password    |"<<endl;
    cout<<"\t| Press 4 to Exit               |"<<endl;
    cout<<"\n\t\t\t Please enter your choice : ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            login();
            break;

        case 2:
             registration();
             break;

        case 3: 
             forgot();
             break;

        case 4:
            cout<<"\t\t\t Thank you! \n\n" ;
            break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from the options given above \n"<<endl;
            main();

    }

}

void login (){
    int cout;
    string userId, password, id, pass;
    system("cls");
    cout<< "\t\t\t Please enter the username and password : "<<endl;
    cin>>userId;
    cout<< "\t\t\t Password ";
    cin>> password;


}










