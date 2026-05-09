#include <iostream>
#include <string>

using namespace std;

class Zwierzak {
public:
    string imie;
    int wiek;

    void dajGlos() {
        cout << imie << " mowi: Hau hau!" << endl;
    }

    void podajWiek() {
        cout << "Mam " << wiek << " lat." << endl;
    }
};

int main() {
    Zwierzak mojPies;
    mojPies.imie = "Burek";
    mojPies.wiek = 3;
    
    mojPies.dajGlos();
    mojPies.podajWiek();

    return 0;
}