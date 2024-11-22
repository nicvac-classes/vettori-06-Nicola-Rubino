#include <iostream>
using namespace std;

int main() {
    srand(time(0));   //Seed random number generator
    
    int n, i, imin;

    cout << "Quanti atleti ci sono in gara? " << endl;
    cin >> n;
    string nomi[n], nazione[n];
    double tempi[n];

    i = 0;
    while (i < n) {
        cout << "scrivi nome del " << i + 1 << "o atleta" << endl;
        cin >> nomi[i];
        tempi[i] = rand() % 11 + 1;
        cout << "scrivi nazionale del " << i + 1 << "o atleta" << endl;
        cin >> nazione[i];
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "ATLETA NUMERO " << i + 1 << endl;
        cout << "nome:" << nomi[i] << " tempo:" << tempi[i] << " nazionale:" << nazione[i] << endl;
        i = i + 1;
    }
    i = 0;
    imin = 0;
    while (i < n) {
        if (tempi[i] < tempi[imin]) {
            imin = i;
        } else {
            i = i + 1;
        }
    }
    cout << "l'atleta con il minor tempo e " << nomi[imin] << " di nazione " << nazione[imin] << " con tempo " << tempi[imin] << endl;
    return 0;
}