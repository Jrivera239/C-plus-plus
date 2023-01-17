#include<istream>
using namespace std;

int main()
{
    int quant;
    int choice;
//quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
//food items sold
    int Srooms=0; Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
//total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

cout<<"\n\t Quantity of items we have";
cout <<"\n Rooms available :";
cin>>Qrooms;
cout<<"\n Quantity of pasta :";
cin>>Qpasta;
cout<<"\n Quantity of burger :";
cin>>Qburger;
cout<<"\n Quantity of noodles :";
cin>>Qnoodles;
cout<<"\n Quantity of shake :";
cin>>Qshake;
cout<<"\n Quantity of chicken :";
cin>>Qchicken;

cout<<"\n\t\t\t Please select from the menu options ";
cout<<"\n\n1) Rooms";
cout<<"\n2) Pasta";
cout<<"\n3) burger";
cout<<"\n4) noodles";
cout<<"\n4) shake";
cout<<"\n5) chicken";
cout<<"\n7) Information regarding sales and collection ";
cout<< "\n8) Exit";

cout<<"\n\n Please Enter Your Choice! ";
cin>>choice;

switch(choice)
{
    case 1:
        cout<<"\n\n Enter the number of rooms you need: ";

        cin>>quant;
        if(Qrooms-Srooms >=quant)
        {
            Srooms=Srooms=quant;
            Total_room= Total_room+quant*1200);
            cout<<"\n\n\t\t"<<quant<<"rooms have been booked for you" ;

        }
        else
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaning in hotel ";
            break;

             case 2:
        cout<<"\n\n Enter Pasta Quantity :";

        cin>>quant;
        if(Qpasta-Spasta >=quant)
        {
            Spasta=Spasta=quant;
            Total_pasta= Total_pasta+quant*200);
            cout<<"\n\n\t\t"<<quant<<"You have order Pasta " ;

        }
        else
        
            cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pastas remaining in hotel ";
            break;

             case 3:
        cout<<"\n\n Enter Burger Quantity :";

        cin>>quant;
        if(Qburger-Sburger >=quant)
        {
            Sburger=Sburger=quant;
            Total_burger Total_burger+quant*125);
            cout<<"\n\n\t\t"<<quant<<"You have order burger " ;

        }
        else
        
            cout<<"\n\tOnly"<<Qburger-Sburger<<"Burgers remaining in hotel ";
            break;

        
            case 4:
        cout<<"\n\n Enter Noodles Quantity :";

        cin>>quant;
        if(Qnoodle-Snoodle >=quant)
        {
            Snoodle=Snoodle=quant;
            Total_noodle Total_noodle+quant*125);
            cout<<"\n\n\t\t"<<quant<<"You have ordernoodle " ;

        }
        else
        
            cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"noodles remaining in hotel ";
            break;

            case 5:
        cout<<"\n\n Enter Shakes Quantity :";

        cin>>quant;
        if(Qshake-Sshake >=quant)
        {
            Sshake=Sshake=quant;
            Total_shake Total_shake+quant*75);
            cout<<"\n\n\t\t"<<quant<<"You have order shake " ;

        }
        else
            cout<<"\n\tOnly"<<Qshake-Sshake<<"shakes remaining in hotel ";
            break;

            case 6:
        cout<<"\n\n Enter Chicken Quantity :";

        cin>>quant;
        if(Qchicken-Schickene >=quant)
        {
            Schicken=Schicken=quant;
            Total_chicken Total_chicken+quant*75);
            cout<<"\n\n\t\t"<<quant<<"You have order chicken " ;

        }
        else
            cout<<"\n\tOnly"<<Qchicken-Schicken<<"chickens remaining in hotel ";
            break;
    }
}



































