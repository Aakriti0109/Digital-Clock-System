#include <iostream>
#include <ctime>     // for time functions
#include <windows.h> // for Sleep()

using namespace std;

int main() {
    while (true) {
        time_t now = time(0);       // get current time
        tm *ltm = localtime(&now);  // convert to local time

        // Clear screen (for Windows)
        system("cls");

        // Display time
        cout << " Digital Clock\n\n";
        cout << "Time: ";
        cout << ltm->tm_hour << ":"
             << ltm->tm_min << ":"
             << ltm->tm_sec << endl;

        Sleep(1000); // wait for 1 second
    }

    return 0;
}