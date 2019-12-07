#include <iostream>
#include <conio.h>
#include "x si 0.h"
#include "functii.cpp"
#include "functii_normal.cpp"
#include "functii_hard.cpp"
using namespace std;

int main()
{
    tabla tab;
    int k=1,n=1,m=2,h,nur=1,z=1,g=1;
    char dif;
    cout<<"<<<X si 0 cu calculatorul:>>>\n";
    do
    {
        cout<<"\n[1].Easy"
            <<"\n[2].Normal"
            <<"\n[3].Hard"
            <<"\n[4].Joaca cu un prieten"
            <<"\n[5].Reseteaza Tabla"
            <<"\n[0].Exit";
        cout<<"\n<-----Optiune:----->";
        cin>>dif;
        switch(dif)
        {
        case '1':
            h=tab.alege_nr();
            if(h==1)
            {
                while(nur!=10 && tab.win(h))
                {
                    if(nur%2==1 && tab.win(h))
                    {
                        tab.Legenda();
                        tab.om_player(n);
                    }
                    if(nur%2==0 && tab.win(h))
                    {
                        k=1;
                        tab.calculator(m,k);
                    }
                    tab.afisare();
                    nur++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }
            if(h==2){
                while(z!=10 && tab.win(h))
                {
                    if(z%2==1 && tab.win(h))
                    {
                        k=1;
                        tab.calculator(n,k);
                    }
                    if(z%2==0 && tab.win(h))
                    {
                        tab.Legenda();
                        tab.om_player(m);
                    }
                    tab.afisare();
                    z++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }
        case '2':
            h=tab.alege_nr();
            if(h==1)
            {
                while(nur!=10 && tab.win(h))
                {
                    if(nur%2==1 && tab.win(h))
                    {
                        tab.Legenda();
                        tab.om_player(n);
                    }
                    if(nur%2==0 && tab.win(h))
                    {
                        k=1;
                        tab.calculator_normal(m,k);
                    }
                    tab.afisare();
                    nur++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }
            if(h==2)
            {
                while(z!=10 && tab.win(h))
                {
                    if(z%2==1 && tab.win(h))
                    {
                        k=1;
                        tab.calculator_normal(n,k);
                    }
                    if(z%2==0 && tab.win(h))
                    {
                        tab.Legenda();
                        tab.om_player(m);
                    }
                    tab.afisare();
                    z++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }

        case '3':
            h=tab.alege_nr();
            if(h==1)
            {
                while(nur!=10 && tab.win(h))
                {
                    if(nur%2==1)
                    {
                        tab.Legenda();
                        tab.om_player(n);
                    }
                    if(nur%2==0 && tab.win(h))
                    {
                        k=1;
                        tab.calculator_hard(m,k);
                    }
                    tab.afisare();
                    nur++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }
            if(h==2)
            {
                while(z!=10 && tab.win(h))
                {
                    if(z%2==1)
                    {
                        k=1;
                        tab.calculator_hard(n,k);
                    }
                    if(z%2==0 && tab.win(h))
                    {
                        tab.Legenda();
                        tab.om_player(m);
                    }
                    tab.afisare();
                    z++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }

        case '4':
            h=tab.alege_nr();
            if(h==1)
            {
                while(nur!=10 && tab.win(h))
                {
                    tab.Legenda();
                    if(nur%2==1 && tab.win(h))
                    {
                        cout<<endl<<"Player 1:\n";
                        tab.om_player(n);
                    }
                    if(nur%2==0 && tab.win(h))
                    {
                        cout<<endl<<"Player 2:\n";
                        tab.om_player(m);
                    }
                    nur++;
                    tab.afisare();
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }

            if(h==2)
            {
                while(z!=10 && tab.win(h))
                {
                    tab.Legenda();
                    if(z%2==1 && tab.win(h))
                    {
                        cout<<"\nPlayer 1:\n";
                        tab.om_player(n);
                    }
                    if(z%2==0 && tab.win(h))
                    {
                        cout<<"\nPlayer 2:";
                        tab.om_player(m);
                    }
                    tab.afisare();
                    z++;
                }
                tab.win(h);
                tab.print_win();
                getch();
                break;
            }
        case '5':
            tab.Reset_tabla();
            z=1;
            nur=1;
            getch();
            break;
        case '0':
            g=0;
            getch();
            break;
        default:
            cout<<"Nu exista optiunea!\n";
            getch();
            break;
        }
    }
    while(g!=0);
    return 0;
}
