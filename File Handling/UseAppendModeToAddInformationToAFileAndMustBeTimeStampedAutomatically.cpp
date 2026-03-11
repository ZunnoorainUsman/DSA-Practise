#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
    time_t now = time(nullptr);
    char timestamp[100];
    tm local_time;
#ifdef _WIN32
    localtime_s(&local_time, &now);// Use localtime_s on Windows
#else
    localtime_r(&now, &local_time);
#endif
    // Format: [2026-03-03 13:06]
    strftime(timestamp, sizeof(timestamp), "[%Y-%m-%d %H:%M]", &local_time);
	fstream fapp("logs.txt", ios::app);
	char name[50], goal[100];
	cout << "Whats your name: ";
	cin.getline(name, 50);
	cout << "Whats your daily goal: ";
	cin.getline(goal, 100);
	fapp << timestamp<< "User: " << name << " - Goal: " << goal << endl;
	cout << "Data added successfully." << endl;

	return 0;
}
