#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace chrono;

int main()
{
    auto start_time = steady_clock::now(); // запоминаем время начала
    system("Abstraktclassshape.exe"); // запускаем программу
    auto end_time = steady_clock::now(); // запоминаем время окончания
    auto duration = duration_cast<milliseconds>(end_time - start_time); // вычисляем длительность в миллисекундах
    cout << "Programm works " << duration.count() << " milliseconds." << endl;
    return 0;
}
