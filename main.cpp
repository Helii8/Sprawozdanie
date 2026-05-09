#include <iostream>
#include <string>

using namespace std;

class Zwierzak {
public:
    string imie;

    void dajGlos() {
        cout << imie << " mowi: Hau hau!" << endl;
    }
};

int main() {
    Zwierzak mojPies;
    mojPies.imie = "Burek";
    
    mojPies.dajGlos();

    return 0;
}