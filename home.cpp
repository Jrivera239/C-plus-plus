#include<istream>
using namespace std;

int main()
{
    int quant;
    int choice;
//quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
//food items sold
    int Srooms=0; Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
//total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_chicken=0;

cout<<"\n\t Quantity of items we have";
cout<<"\n Rooms available :";
cin>>Qrooms;
cout<<"\n Quantity of pasta :";
cin>>Qpasta;
cout<<"\n Quantity of burger :";
cin>>Qburger;
cout<<"\n Quantity of noodles :";
cin>>Qnoodle;
cout<<"\n Quantity of shake :";
cin>>Qshake;
cout<<"\n Quantity of chicken :";
cin>>Qchicken;

m:
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
            Total_rooms= Total_rooms+quant*1200;
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
            Total_pasta= Total_pasta+quant*200;
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
            Total_burger= Total_burger+quant*125;
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
            Total_noodle= Total_noodle+quant*125;
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
            Total_shake= Total_shake+quant*75;
            cout<<"\n\n\t\t"<<quant<<"You have order shake " ;

        }
        else
            cout<<"\n\tOnly"<<Qshake-Sshake<<"shakes remaining in hotel ";

            break;

    case 6:
        cout<<"\n\n Enter Chicken Quantity :";

        cin>>quant;
        if(Qchicken-Schicken >=quant)
        {
            Schicken=Schicken=quant;
            Total_chicken= Total_chicken+quant*95;
            cout<<"\n\n\t\t"<<quant<<"You have order chicken " ;

        }
        else
            cout<<"\n\tOnly"<<Qchicken-Schicken<<"chickens remaining in hotel ";

            break;

        case 7:

        cout<<"\n\t\tDetails of daily sales Collection ";
        cout<<"\n\n Number of rooms available : "<<Qrooms;
        cout<<"\n\n Number of rooms rented "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day :"<<Total_rooms;

        cout<<"\n\n Number of Pastas available : "<<Qpasta;
        cout<<"\n\n Number of Pastas rented "<<Spasta;
        cout<<"\n\n Remaining Pastas : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pastas collection for the day :"<<Total_pasta;

        cout<<"\n\n Number of Burgers available : "<<Qburger;
        cout<<"\n\n Number of burgers rented "<<Sburger;
        cout<<"\n\n Remaining burgers : "<<Qburger-Sburger;
        cout<<"\n\n Total burgers collection for the day :"<<Total_burger;
        
        cout<<"\n\n Number of noodles available : "<<Qnoodle;
        cout<<"\n\n Number of noodles rented "<<Snoodle;
        cout<<"\n\n Remaining noodles : "<<Qnoodle-Snoodle;
        cout<<"\n\n Total noodles collection for the day :"<<Total_noodle ;

        cout<<"\n\n Number of shakes available : "<<Qshake;
        cout<<"\n\n Number of shake rented "<<Sshake;
        cout<<"\n\n Remaining shake : "<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day :"<<Total_shake;

        cout<<"\n\n Number of chicken available : "<<Qchicken;
        cout<<"\n\n Number of chicken rented "<<Schicken;
        cout<<"\n\n Remaining chicken : "<<Qchicken-Schicken;
        cout<<"\n\n Total chicken collection for the day :"<<Total_chicken;

        case 8:
            exit(0);
            default:
                count<<"\n Please select any number from above."
    }
    goto m;
}



































