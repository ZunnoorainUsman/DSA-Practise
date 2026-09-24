#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void output(int arr[][6], int size)
{
	cout << "          Mon Tue Wed Thu Fri Sat" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << "Route " << i + 1 << ": ";
		for (int j = 0; j < 6; ++j)
		{
			cout << *(*(arr + i) + j) << "  ";
		}
		cout << endl;
	}
}
void weeklyReport(int** grid, int routes)
{
	for (int i = 0; i < routes; ++i)
	{
		int sumR = 0;
		for (int j = 0; j < 6; ++j)
		{
			sumR += *(*(grid + i) + j);
		}
		float a = (float)sumR / 6;
		cout << "Route " << i + 1 << "/ Total: " << sumR << " /Daily av: " << a;
		if (a < 80)
			cout << "/ Low Demand: Consider reducing buses" << endl;
		else
			cout << "/ Healthy Demand" << endl;
	}
}
void freeGrid(int**& grid, int rows)
{
	for (int i = 0; i < rows; ++i)
		delete[]grid[i];
	delete[]grid;
	grid = nullptr;
}
int main()
{
	int p[4][6] = { 
		{120,95,110,130,145,160},
		{80,70,90,100,85,95},
		{200,180,210,190,220,230},
		{50,45,60,55,70,65} };
	output(p, 4);
	for (int i = 0; i < 4; ++i)
	{
		int sumR = 0;
		for (int j = 0; j < 6; ++j)
		{
			sumR += *(*(p + i) + j);
		}
		cout << "Route " << i + 1 << ": " << sumR << " passengers";
		cout << endl;
	}
	int sum = 0;
	int day = 0;
	for (int i = 0; i < 6; ++i)
	{
		int sumC = 0;
		for (int j = 0; j < 4; ++j)
		{
			sumC += *(*(p + j) + i);
		}
		if (i == 0)
		{
			day = i;
			sum = sumC;
		}
		if (sumC > sum)
		{
			day = i;
			sum = sumC;
		}
	}
	cout << "Day with highest total: " << day + 1 << " (" << sum << ")" << endl;

	int R;
	cin >> R;
	int** grid = new int* [R];
	for (int i = 0; i < R; ++i)
		grid[i] = new int[6];
	for (int i = 0; i < R; ++i)
	{
		cout << "Enter passenger for roure " << i + 1 << " :";
		for (int j = 0; j < 6; ++j)
		{
			cin >> grid[i][j];
		}
	}
	weeklyReport(grid, R);
	cout << endl;
	ofstream fout("bus_report.txt");
	for (int i = 0; i < R; ++i)
	{
		int sumR = 0;
		for (int j = 0; j < 6; ++j)
		{
			sumR += *(*(grid + i) + j);
		}
		float a = (float)sumR / 6;
		fout << "Route" << i + 1 << "/Total:" << sumR << "/Dailyav:" << a;
		if (a < 80)
			fout << "/Low Demand: Consider reducing buses" << endl;
		else
			fout << "/ Healthy Demand" << endl;
	}
	fout.close();
	ifstream fin("bus_report.txt");
	if (!fin)
		return 1;
	int count = 0;
	char route[20];
	char slash;
	char total[20];
	char av[20];
	char demand[50];
	int i = 0;
	cout << "Low demand routes: " << endl;
	while (fin.getline(route, 20, '/'))
	{
		fin.getline(total, 20, '/');
		fin.getline(av, 20, '/');
		fin.getline(demand, 50);
		if (strcmp(demand, "Low Demand: Consider reducing buses") == 0)
		{
			cout << route << " " << total << " " << av << " " << demand << endl;
		}
	}
	fin.close();
	freeGrid(grid, R);
	if (grid == nullptr)
		cout << "nulptr";
	return 0;
}