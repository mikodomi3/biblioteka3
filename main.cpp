#include <iostream>
#include "matematyka.h"
using namespace std;

int main()
{
    cout << "Twierdzenie pitagorasa: przyprostokatne 6 i 8" << pitagoras(6,8) << "\n";
    cout << "skromne liczby " << czySkromna(1) << " " << czySkromna(13) << "\n";
    cout << "liczby doskonale " << czyDoskonala(12) << " " << czyDoskonala(3);

    return 0;
}
