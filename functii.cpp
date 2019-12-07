#include <iostream>
#include "x si 0.h"
using namespace std;
tabla::tabla()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            t[i][j]=0;
    om=0;calc=0;
}
int tabla::alege_nr()
{
    int nr;

    do
    {
        cout<<"Cu ce doriti sa jucati cu 1 sau 2(1=0 2=x):";
        cin>>nr;
    }
    while(nr>2 || nr<1);
    return nr;
}
void tabla::om_player(int nr_om)
{
    int i,j,a,g=1;
    cout<<"\nIndroduceti pozitia:";
    cin>>a;
    while(a<1 || a>9)
    {
        cout<<"Pozitie invalida\n";
        cout<<"\nIndroduceti pozitia:";
        cin>>a;
    }
    do
    {
        for(int k=1; k<10; k++)
        {
            if(k==a && a<4)
            {
                i=0;
                for(j=0; j<3; j++)
                {
                    if(j==a-1 && t[i][j]==0)
                        g=1;
                    if(j==a-1 && t[i][j]!=0)
                        g=0;

                }
            }
            if(k==a && a<7 && a>3)
            {
                i=1;
                for(j=0; j<3; j++)
                {
                    if(j==a-4 && t[i][j]==0)
                        g=1;
                    if(j==a-4 && t[i][j]!=0)
                        g=0;
                }
            }
            if(k==a && a<=9 && a>6)
            {
                i=2;
                for(j=0; j<3; j++)
                {
                    if(j==a-7 && t[i][j]==0)
                        g=1;
                    if(j==a-7 && t[i][j]!=0)
                        g=0;
                }
            }
        }
        if(g==0)
        {
            cout<<"Pozitie invalida\n";
            cout<<"\nIndroduceti pozitia:";
            cin>>a;
        }
    }
    while(g==0);
    for(int k=1; k<10; k++)
    {
        if(k==a && a<4)
        {
            i=0;
            for(j=0; j<3; j++)
                if(j==a-1 && t[i][j]==0)
                    t[i][j]=nr_om;
        }
        if(k==a && a<7 && a>3)
        {
            i=1;
            for(j=0; j<3; j++)
                if(j==a-4 && t[i][j]==0)
                    t[i][j]=nr_om;
        }
        if(k==a && a<=9 && a>6)
        {
            i=2;
            for(j=0; j<3; j++)
                if(j==a-7 && t[i][j]==0)
                    t[i][j]=nr_om;
        }
    }

}
void tabla::calculator(int nr_calc,int& k)
{
    int i,j,g=1,d=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(t[i][j]==nr_calc && i==j || t[i][j]==0 && i==j)
                d++;
            if(i==j)
                if(t[i][j]!=nr_calc && t[i][j]>0)
                    g=0;
        }
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && i==j)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    i=0;
    d=0;
    for(j=0; j<3; j++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && i==0)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    j=0;
    d=0;
    for(i=0; i<3; i++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && j==0)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    i=2;
    d=0;
    for(j=0; j<3; j++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && i==2)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    i=1;
    d=0;
    for(j=0; j<3; j++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && i==2)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    j=1;
    d=0;
    for(i=0; i<3; i++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && j==2)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    j=2;
    d=0;
    for(i=0; i<3; i++)
    {
        if(t[i][j]==nr_calc || t[i][j]==0)
            d++;
        if(t[i][j]!=nr_calc && t[i][j]>0)
            g=0;
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=0;
        while(k!=0 || i>2)
        {
            i++;
            while(j<3 && k!=0)
            {
                if(t[i][j]==0 && j==2)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j++;
            }
            if(j==3)
                j=0;
        }
    }
    g=1;
    d=0;
    for(i=2; i>=0; i--)
    {
        for(j=0; j<3; j++)
        {
            if(t[i][j]!=nr_calc && t[i][j]>0)
                g=0;
        }
        j=0+i;
        if(t[i][j]==nr_calc || t[i][j]==0)
        {
            d++;
        }
    }
    if(g==1 && d==3)
    {
        i=-1;
        j=2;
        while(k!=0 || i>2)
        {
            i++;
            while(j>=0 && k!=0)
            {
                if(t[i][j]==0)
                {
                    t[i][j]=nr_calc;
                    k=0;
                }
                j--;
            }
            if(j==0)
                j=2;
        }
    }
    for(int i=0; i<3; i++)
    {
        j=0;
        while(k!=0 || j>3)
        {
            if(t[i][j]==0)
            {
                t[i][j]=nr_calc;
                k=0;
            }
            j++;
        }
    }
}
void tabla::afisare()
{
    int i,j;
    for(i=0; i<3; i++)
    {
        cout<<"-------";
        cout<<"\n";
        cout<<"|";
        for(j=0; j<3; j++)
        {
            if(t[i][j]==0)
                cout<<" ";
            if(t[i][j]==1)
                cout<<"O";
            if(t[i][j]==2)
                cout<<"X";
            cout<<"|";
        }
        cout<<"\n";
    }
    cout<<"-------";
    cout<<"\n";
}
void tabla::Legenda()
{
    int a=1;
    cout<<endl<<"Legenda:\n";
    for(int i=0; i<3; i++)
    {
        cout<<"-------";
        cout<<"\n";
        cout<<"|";
        for(int j=0; j<3; j++)
        {
            cout<<a;
            cout<<"|";
            a++;
        }
        cout<<"\n";
    }
    cout<<"-------";
}
int tabla::win(int nor)
{
    if(nor==1)
    {
        //diagonala principala
        if(t[0][0]==1 && t[1][1]==1 && t[2][2]==1)
            om=3;
        if(t[0][0]==2 && t[1][1]==2 && t[2][2]==2)
            calc=3;
        //prima linie
        if(t[0][0]==1 && t[0][1]==1 && t[0][2]==1)
            om=3;
        if(t[0][0]==2 && t[0][1]==2 && t[0][2]==2)
            calc=3;
        //a doua linie
        if(t[1][0]==1 && t[1][1]==1 && t[1][2]==1)
            om=3;
        if(t[1][0]==2 && t[1][1]==2 && t[1][2]==2)
            calc=3;
        //a treia linie
        if(t[2][0]==1 && t[2][1]==1 && t[2][2]==1)
            om=3;
        if(t[2][0]==2 && t[2][1]==2 && t[2][2]==2)
            calc=3;
        //prima coloana
        if(t[0][0]==1 && t[1][0]==1 && t[2][0]==1)
            om=3;
        if(t[0][0]==2 && t[1][0]==2 && t[2][0]==2)
            calc=3;
        // a doua coloana
        if(t[0][1]==1 && t[1][1]==1 && t[2][1]==1)
            om=3;
        if(t[0][1]==2 && t[1][1]==2 && t[2][1]==2)
            calc=3;
        //a treia coloana
        if(t[0][2]==1 && t[1][2]==1 && t[2][2]==1)
            om=3;
        if(t[0][2]==2 && t[1][2]==2 && t[2][2]==2)
            calc=3;
        //diagonala secundara
        if(t[0][2]==1 && t[1][1]==1 && t[2][0]==1)
            om=3;
        if(t[0][2]==2 && t[1][1]==2 && t[2][0]==2)
            calc=3;
    }
    if(nor==2)
    {
        //diagonala principala
        if(t[0][0]==2 && t[1][1]==2 && t[2][2]==2)
            om=3;
        if(t[0][0]==1 && t[1][1]==1 && t[2][2]==1)
            calc=3;
        //prima linie
        if(t[0][0]==2 && t[0][1]==2 && t[0][2]==2)
            om=3;
        if(t[0][0]==1 && t[0][1]==1 && t[0][2]==1)
            calc=3;
        //a doua linie
        if(t[1][0]==2 && t[1][1]==2 && t[1][2]==2)
            om=3;
        if(t[1][0]==1 && t[1][1]==1 && t[1][2]==1)
            calc=3;
        //a treia linie
        if(t[2][0]==2 && t[2][1]==2 && t[2][2]==2)
            om=3;
        if(t[2][0]==1 && t[2][1]==1 && t[2][2]==1)
            calc=3;
        //prima coloana
        if(t[0][0]==2 && t[1][0]==2 && t[2][0]==2)
            om=3;
        if(t[0][0]==1 && t[1][0]==1 && t[2][0]==1)
            calc=3;
        // a doua coloana
        if(t[0][1]==2 && t[1][1]==2 && t[2][1]==2)
            om=3;
        if(t[0][1]==1 && t[1][1]==1 && t[2][1]==1)
            calc=3;
        //a treia coloana
        if(t[0][2]==2 && t[1][2]==2 && t[2][2]==2)
            om=3;
        if(t[0][2]==1 && t[1][2]==1 && t[2][2]==1)
            calc=3;
        //diagonala secundara
        if(t[0][2]==2 && t[1][1]==2 && t[2][0]==2)
            om=3;
        if(t[0][2]==1 && t[1][1]==1 && t[2][0]==1)
            calc=3;
    }
    if(om==3 || calc==3)
        return 0;
    return 1;
}
void tabla::print_win()
{
    if(om==3)
        cout<<"<---A castigat Player-ul 1--->\n";
    if(calc==3)
        cout<<"<---A castigat Player-ul 2--->\n";
    if(om<3 && calc<3)
        cout<<"Remiza!\n";
}
void tabla::Reset_tabla(){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            t[i][j]=0;
    om=0;calc=0;
    cout<<"\nSucces!\n";
}
tabla::~tabla()
{
}
