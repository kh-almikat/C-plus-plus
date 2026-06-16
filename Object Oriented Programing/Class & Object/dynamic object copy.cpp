#include <bits/stdc++.h>
using namespace std;

class player{
    public:
        string name;
        int jercey;

    player(string name,int jercey)
    {
        this->jercey = jercey;
        this->name = name;
    }
};
int main() 
{
    player *ronaldo = new player("ronaldo", 7);
    player *messi = new player("messi", 10);

    *messi = *ronaldo; //copying dynamic object ronaldo to messi
    delete ronaldo;

    cout << messi->name << " " << messi->jercey;
}