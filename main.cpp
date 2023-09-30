#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int ascii = 178;
int i=0;
char ch = ascii;

struct book
{
    int id;
    string name;
    string date;
    string author;
}B[25];
void heading()
{
    for(int i=0;i<40;i++)
    {
        cout<<ch;
    }
    cout<<" LIBRARY MANAGEMENT SYSTEM ";
    for(int i=0;i<40;i++)
    {
        cout<<ch;
    }
}
void addBook()
{
    system("cls");
    heading();
    cout<<"\n\nENTER BOOK ID: ";
    cin>>B[i].id;
    cout<<"ENTER BOOK NAME: ";
    cin>>B[i].name;
    cout<<"ENTER BOOKS REG DATE: ";
    cin>>B[i].date;
    cout<<"ENTER BOOKS AUTHOR: ";
    cin>>B[i].author;
    i++;
    cout<<"\n\n"<<" BOOK "<<i<<" REGISTERED SUCCESSFULLY";


}
void searchbook()
{
    system("cls");
    int t_id;
    int flag = 0;
    if(i==0)
    {
        cout<<"\n\n"<<" NO BOOK IS REGISTERED";
    }
    else

        cout<<"ENTER BOOK ID: ";
        cin>>t_id;
        for(int t=0;t<i;t++)
        {
            if(t_id == B[t].id)
                cout<<"\n\n NAME: "<<B[t].name;
                cout<<"AUTHOR: "<<B[t].author;
                cout<<"REG DATE: "<<B[t].date;
                flag++;

        }
        if(flag=0)
            cout<<"\n\n"<<" BOOK "<<t_id<<" NO BOOK IS REGISTERED IN THIS ID";



}

int main()
{
    clean:
        system("cls");
    int choice;
    heading();
    cout<<"\n\n"<<ch<<ch<<"1. SEARCH BOOKS";
    cout<<"\n\n"<<ch<<ch<<"2. ADD BOOKS";
    cout<<"\n\n"<<ch<<ch<<"3. VIEW ALL BOOK";
    cout<<"\n\n"<<ch<<ch<<"4. ADD READERS";
    cout<<"\n\n"<<ch<<ch<<"5. REGISTER BOOK";
    cout<<"\n\n"<<ch<<ch<<"6. BOOK DUES";
    cout<<"\n\n"<<ch<<ch<<"7. EXIT";

    cout<<"\n\n";
    cout<<"\n\n"<<"SELECT ANY OPTION: ";
    cin>>choice;

    switch(choice)
    {

        case 1:
            searchbook();
            break;
        case 2:
            addBook();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            exit(0);
        default:
            cout<<"\n\n"<<"INVALID OPTION ";
    }
    getch();
    goto clean;




}
