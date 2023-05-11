// Implementacja biblioteki zawierającej podstawowe funkcje we/wyjścia dzięki, którym użytkownik może coś wprowadzić
#include <iostream>

// Implementacja standardowej biblioteki  string
#include <string>

// Implementacja biblioteki zawierającej funkcję do sprawdzenia czy wprowadzony znak to liczba
#include <cctype>

// Użycie przestrzeni nazw standardowej biblioteki C++
using namespace std;

// Funkcja rozpoczyna i kończy działanie programu
int main()
{

    // Określenie początku ciągu liczb
    int start;
    // Określenie końca ciągu liczb
    int end;
    // Określenie sumy liczb w danym ciągu
    int sum = 0;
    // Określenie ilości liczb podzielnych przez dwa
    int count = 0;
    // Wprowadzanie wartości
    string input;

    // Dzięki pętli DO WHILE sprawdzamy czy to co wprowadził użytkownik jest tylko liczbą. Pętla najpierw wykona swoje dzialanie a na koncu sprawdzi warunek.
    do {
        // Wyświetlenie informacji o liczbie poczatkowej ciagu
        cout << "Podaj wartosc poczatkowa: ";
        // Pobranie znaku od użytkownika
        cin >> input;
        // Sprawdzenie czy wprowadzony łańcuch znaków to liczba. Jeśli jest inna to wypisuje na ekran zawartość niepoprawnej wartości.
        if (!isdigit(input[0])) {
            // Wypisanie na ekran komunikatu
            cout << "Niepoprawna wartosc. Spróbuj ponownie.\n";
            // Kontynuuje program w przypadku bledu. Prosimy ponownie o wprowadzenie wartosci poczatkowej.
            continue;
        }
        // Przypisanie wprowadzonego znaku do zmiennej START. 
        // Nastepuje tu rzutowanie typów z string na int zmiennej INPUT
        start = stoi(input);
        // W przypadku gdy bedzie to liczba to wychodzi program z petli i sprawdzamy kolejna liczbe
        break;
    } while (true);

    // Dzięki pętli DO WHILE sprawdzamy czy to co wprowadził użytkownik jest tylko liczbą. Pętla najpierw wykona swoje dzialanie a na koncu sprawdzi warunek.
    do {
        // Wyświetlenie informacji o liczbie koncowej ciagu
        cout << "Podaj wartosc koncowa: ";
        // Pobranie znaku od użytkownika
        cin >> input;
        // Sprawdzenie czy wprowadzony łańcuch znaków to liczba. Jeśli jest inna to wypisuje na ekran zawartość niepoprawnej wartości.
        if (!isdigit(input[0])) {
            // Wypisanie na ekran komunikatu
            cout << "Niepoprawna wartosc. Sprobuj ponownie.\n";
            // Kontynuuje program w przypadku bledu. Prosimy ponownie o wprowadzenie wartosci poczatkowej.
            continue;
        }
        // Przypisanie wprowadzonego znaku do zmiennej END. 
        // Nastepuje tu rzutowanie typów z string na int zmiennej INPUT
        end = stoi(input);

        // Sprawdzenie czy liczba koncowa jest mniejsza niz liczba poczatkowa
        if (end < start) {
            // Wypisanie na ekran komunikatu
            std::cout << "Wartosc koncowa nie moze byc mniejsza niz poczatkowa. Sprobuj ponownie.\n";
            // W przypadku bledu program kontynuuje i prosi ponownie o liczbe
            continue;
        }

        // W przypadku gdy bedzie to liczba to wychodzi program z petli i sprawdzamy kolejna liczbe
        break;
    } while (true);

    // Pętla FOR w której określany jest punkt poczatkowy oraz punkt koncowy oraz jak sie poruszac po petli, w tym przypadku dodajemy +1 do zmiennej I.
    for (int i = start; i <= end; i++) {
        // Sprawdzenie czy liczba ma resztę modulo jeśli jest brak reszty
        if (i % 2 == 0) {
            // Dodajemy liczbę do sumy liczb podzielnych przez dwa
            sum += i;
            // DOdanie liczby jako +1 do liczb podzielnych przez dwa
            count++;
        }
    }
    // Wypisanie komunikatów informujących o wyniku programu oraz opróżnienie bufora wyjścia (endl)
    cout << "Suma liczb podzielonych przez 2: " << sum << endl;
    cout << "Ilosc liczb podzielonych przez 2: " << count << endl;

    return 0;
}