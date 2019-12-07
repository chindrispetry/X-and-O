#ifndef X_SI_0_H_INCLUDED
#define X_SI_0_H_INCLUDED
class tabla{
        int t[3][3];
        int om,calc;
    public:
        tabla();
        ~tabla();
        int alege_nr();
        int win(int );
        void om_player(int);
        void calculator(int ,int&);
        void calculator_normal(int ,int &);
        void calculator_hard(int ,int&);
        void afisare();
        void Legenda();
        void print_win();
        void Reset_tabla();
};
#endif // X_SI_0_H_INCLUDED
