// Implementacja biblioteki zawierającej podstawowe funkcje we/wyjścia dzięki, którym użytkownik może coś wprowadzić
#include <iostream>

// Użycie przestrzeni nazw standardowej biblioteki C++
using namespace std;

int main() {
    // Rozpoczecie petli od liczby nieparzystej liczba poczatkowa I ma byc rowna 25 lub mniejsza, nastepnie do kazdej iteracji dodajemy +2
    for (int i = 11; i <= 25; i += 2) {
        // Wypisanie liczb nie parzystych
        cout << i << " ";
    }
    return 0;
}