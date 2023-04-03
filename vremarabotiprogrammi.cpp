#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace chrono;

int main()
{
    auto start_time = steady_clock::now();
    system("Abstraktclassshape.exe");
    auto end_time = steady_clock::now();
    auto duration = duration_cast<milliseconds>(end_time - start_time);
    cout << "Programm works " << duration.count() << " milliseconds." << endl;
    return 0;
}
