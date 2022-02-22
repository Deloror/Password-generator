#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int c=0;
int x=0;
int tab[16];
char tabc[16];





int main()
{
    srand(time(NULL));

    for (int i=0; i<=16; i++)
    {
        x = rand() % 10;
        tab[c]=x;
        c++;
    }

    c=0;

    for (int i=0; i<=16; i++)
    {
        tab[c]=tab[c]+97;
        if(c%2)
        {
            tab[c]=tab[c]+10;
        }
        //cout << tab[c] << " ";
        c++;
    }

    c=0;
    //cout << endl;

    for (int i=0; i<=16; i++)
    {
        tabc[c]=(char)tab[c];
        cout << tabc[c] << " ";
        c++;
    }






    return 0;
}
