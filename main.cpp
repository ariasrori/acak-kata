#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    int acak = 0, tamp;
    srand(static_cast<unsigned int>(time(0)));
    string kata = "semarangku";
    string tebak = kata;
    string jawab;

    int i = 0;
    while(i<kata.size()){
        acak = (rand() % kata.size()-i) + i;
        tamp = kata[i];
        kata[i] = kata[acak];
        kata[acak] = tamp;
        i++;
    }

    cout << kata << endl;

    cout << "Tebak kata : "; getline(cin, jawab);
    if(tebak.compare(jawab) == 0){
        cout << "Tebakan benar" << endl;
    }else{
        cout << "Tebakan salah" << endl;
    }


    return 0;
}
