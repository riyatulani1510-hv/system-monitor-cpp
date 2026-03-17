#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void showStats() {
    system("clear");
    cout << "===== SYSTEM MONITOR =====" << endl;

    cout << "CPU Usage:" << endl;
    system("top -l 1 | grep \"CPU usage\"");

    cout << "\nMemory Usage:" << endl;
    system("vm_stat");

}

int main() {
    while (true) {
        showStats();
        this_thread::sleep_for(chrono::seconds(2));
    }
    return 0;
}