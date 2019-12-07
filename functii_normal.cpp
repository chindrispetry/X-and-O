#include <iostream>
#include "x si 0.h"
using namespace std;
void tabla::calculator_normal(int nr_calc,int & k)
{
    int i,j;
    //diagonala principala blocheaza
    if(k==1){
    j=0;i=0;
    if(t[i][j]==0 || t[i+1][j+1]==0 || t[i+2][j+2]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+1][j+1]!=0 && t[i+1][j+1]!=nr_calc && k!=0){
        t[i+2][j+2]=nr_calc;
        k=0;
    }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+2][j+2]!=0 && t[i+2][j+2]!=nr_calc && k!=0){
        t[i+1][j+1]=nr_calc;
        k=0;
    }
    if(t[i+2][j+2]!=0 && t[i+2][j+2]!=nr_calc && t[i+1][j+1]!=0 && t[i+1][j+1]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
        }
    }
    //prima coloana blocare
    if(k==1){
    j=0;i=0;
    if(t[i][j]==0 || t[i+1][j]==0 || t[i+2][j]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i+2][j]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+2][j]!=0 && t[i+2][j]!=nr_calc && k!=0){
        t[i+1][j]=nr_calc;
        k=0;
        }
    if(t[i+2][j]!=0 && t[i+2][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // a doua coloana blocare
    if(k==1){
    j=1;i=0;
    if(t[i][j]==0 || t[i+1][j]==0 || t[i+2][j]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i+2][j]=nr_calc;
        k=0;
    }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+2][j]!=0 && t[i+2][j]!=nr_calc && k!=0){
        t[i+1][j]=nr_calc;
        k=0;
    }
    if(t[i+2][j]!=0 && t[i+2][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // a treia coloana blocare
    if(k==1){
    j=2;i=0;
    if(t[i][j]==0 || t[i+1][j]==0 || t[i+2][j]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i+2][j]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+2][j]!=0 && t[i+2][j]!=nr_calc && k!=0){
        t[i+1][j]=nr_calc;
        k=0;
        }
    if(t[i+2][j]!=0 && t[i+2][j]!=nr_calc && t[i+1][j]!=0 && t[i+1][j]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // prima linie blocare
    if(k==1){
    i=0;j=0;
    if(t[i][j]==0 || t[i][j+1]==0 || t[i][j+2]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j+2]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+2]!=0 && t[i][j+2]!=nr_calc && k!=0){
        t[i][j+1]=nr_calc;
        k=0;
        }
    if(t[i][j+2]!=0 && t[i][j+2]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // a doua linie blocare
    if(k==1){
    i=1;j=0;
    if(t[i][j]==0 || t[i][j+1]==0 || t[i][j+2]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j+2]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+2]!=0 && t[i][j+2]!=nr_calc && k!=0){
        t[i][j+1]=nr_calc;
        k=0;
        }
    if(t[i][j+2]!=0 && t[i][j+2]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // a treia linie blocare
    if(k==1){
    i=2;j=0;
    if(t[i][j]==0 || t[i][j+1]==0 || t[i][j+2]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j+2]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i][j+2]!=0 && t[i][j+2]!=nr_calc && k!=0){
        t[i][j+1]=nr_calc;
        k=0;
        }
    if(t[i][j+2]!=0 && t[i][j+2]!=nr_calc && t[i][j+1]!=0 && t[i][j+1]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    // diagonala secundara blocare
    if(k==1){
    j=2;i=0;
    if(t[i][j]==0 || t[i+1][j-1]==0 || t[i+2][j-2]==0){
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+1][j-1]!=0 && t[i+1][j-1]!=nr_calc && k!=0){
        t[i+2][j-2]=nr_calc;
        k=0;
        }
    if(t[i][j]!=0 && t[i][j]!=nr_calc && t[i+2][j-2]!=0 && t[i+2][j-2]!=nr_calc && k!=0){
        t[i+1][j-1]=nr_calc;
        k=0;
        }
    if(t[i+2][j-2]!=0 && t[i+2][j-2]!=nr_calc && t[i+1][j-1]!=0 && t[i+1][j-1]!=nr_calc && k!=0){
        t[i][j]=nr_calc;
        k=0;
        }
    }
    }
    if(k==1){
    //diagonala principala
    if(t[0][0]==0 || t[0][0]==nr_calc && t[1][1]==0 || t[1][1]==nr_calc && t[2][2]==0 || t[2][2]==nr_calc && k!=0){
        if(t[0][0]==0 && k!=0){
            t[0][0]=nr_calc;
            k=0;
        }
        if(t[1][1]==0 && k!=0){
            t[1][1]=nr_calc;
            k=0;
        }
        if(t[2][2]==0 && k!=0){
            t[2][2]=nr_calc;
            k=0;
        }
    }
    //prima coloana
    if(t[0][0]==0 || t[0][0]==nr_calc && t[1][0]==0 || t[1][0]==nr_calc && t[2][0]==0 || t[2][0]==nr_calc && k!=0){
        if(t[0][0]==0 && k!=0){
            t[0][0]=nr_calc;
            k=0;
        }
        if(t[1][0]==0 && k!=0){
            t[1][0]=nr_calc;
            k=0;
        }
        if(t[2][0]==0 && k!=0){
            t[2][0]=nr_calc;
            k=0;
        }
    }
    //a doua coloana
    if(t[0][1]==0 || t[0][1]==nr_calc && t[1][1]==0 || t[1][1]==nr_calc && t[2][1]==0 || t[2][1]==nr_calc && k!=0){
        if(t[0][1]==0 && k!=0){
            t[0][1]=nr_calc;
            k=0;
        }
        if(t[1][1]==0 && k!=0){
            t[1][1]=nr_calc;
            k=0;
        }
        if(t[2][1]==0 && k!=0){
            t[2][1]=nr_calc;
            k=0;
        }
    }
    // a treia coloana
    if(t[0][2]==0 || t[0][2]==nr_calc && t[1][2]==0 || t[1][2]==nr_calc && t[2][2]==0 || t[2][2]==nr_calc && k!=0){
        if(t[0][2]==0 && k!=0){
            t[0][2]=nr_calc;
            k=0;
        }
        if(t[1][2]==0 && k!=0){
            t[1][2]=nr_calc;
            k=0;
        }
        if(t[2][2]==0 && k!=0){
            t[2][2]=nr_calc;
            k=0;
        }
    }
    //prima linie
    if(t[0][0]==0 || t[0][0]==nr_calc && t[0][1]==0 || t[0][1]==nr_calc && t[0][2]==0 || t[0][2]==nr_calc && k!=0){
        if(t[0][0]==0 && k!=0){
            t[0][0]=nr_calc;
            k=0;
        }
        if(t[0][1]==0 && k!=0){
            t[0][1]=nr_calc;
            k=0;
        }
        if(t[0][2]==0 && k!=0){
            t[0][2]=nr_calc;
            k=0;
        }
    }
    //a doua linie
    if(t[1][0]==0 || t[1][0]==nr_calc && t[1][1]==0 || t[1][1]==nr_calc && t[1][2]==0 || t[1][2]==nr_calc && k!=0){
        if(t[1][0]==0 && k!=0){
            t[1][0]=nr_calc;
            k=0;
        }
        if(t[1][1]==0 && k!=0){
            t[1][1]=nr_calc;
            k=0;
        }
        if(t[1][2]==0 && k!=0){
            t[1][2]=nr_calc;
            k=0;
        }
    }
    //a treia linie
    if(t[2][0]==0 || t[2][0]==nr_calc && t[2][1]==0 || t[2][1]==nr_calc && t[2][2]==0 || t[2][2]==nr_calc && k!=0){
        if(t[2][0]==0 && k!=0){
            t[2][0]=nr_calc;
            k=0;
        }
        if(t[2][1]==0 && k!=0){
            t[2][1]=nr_calc;
            k=0;
        }
        if(t[2][2]==0 && k!=0){
            t[2][2]=nr_calc;
            k=0;
        }
    }
    //diagonala secundara
    if(t[0][2]==0 || t[0][2]==nr_calc && t[1][1]==0 || t[1][1]==nr_calc && t[2][0]==0 || t[2][0]==nr_calc && k!=0){
        if(t[0][2]==0 && k!=0){
            t[0][2]=nr_calc;
            k=0;
        }
        if(t[1][1]==0 && k!=0){
            t[1][1]=nr_calc;
            k=0;
        }
        if(t[2][0]==0 && k!=0){
            t[2][0]=nr_calc;
            k=0;
        }
    }
    }
}
