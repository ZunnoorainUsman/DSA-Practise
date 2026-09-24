#include<iostream>
using namespace std;

void calculations(int score[][7], int row, char team[])
{
	for (int i = 0; i < row; ++i)
	{
		int CurrentRsum = 0;
		for (int j = 0; j < 7; ++j)
		{
			CurrentRsum += score[i][j];
		}
		cout << "Team " << team[i] << " : " << CurrentRsum << endl;
	}
	for (int i = 0; i < 7; ++i)
	{
		int CurrentCsum = 0;
		for (int j = 0; j < row; ++j)
		{
			CurrentCsum += score[j][i];
		}
		cout << "Day " << i + 1 << " : " << CurrentCsum << endl;
	}
	int highest;
	int indexTeam = 0;
	for (int i = 0; i < row; ++i)
	{
		int CurrentRsum = 0;
		for (int j = 0; j < 7; ++j)
		{
			CurrentRsum += score[i][j];
		}
		if (i == 0) {
			highest = CurrentRsum;
			indexTeam = i;
		}  
		if (CurrentRsum > highest)
		{
			highest = CurrentRsum;
			indexTeam = i;
		}
	}
	cout << "team with highest score: " << team[indexTeam] << " with " << highest << endl;
	int highestS = 0;
	int noOfDay = 0;
	for (int i = 0; i < 7; ++i)
	{
		int CurrentCsum = 0;
		for (int j = 0; j < row; ++j)
		{
			CurrentCsum += score[j][i];
		}
		if (i == 0) {
			highestS = CurrentCsum;
			noOfDay = i;
		}
		if (CurrentCsum > highestS)
		{
			highestS = CurrentCsum;
			noOfDay = i;
		}
	}
	cout << "Day with highest score DAY " << noOfDay + 1 << " " << highestS << endl;
}

int main()
{
	int score[4][7] =
	{
		{10,20,15,30,25,18,22},
		{12,18,20,25,30,15,19},
		{8,22,19,28,24,20,17},
		{15,25,18,20,22,19,24}
	};
	char team[5] = { 'A','B','C','D' };
	calculations(score, 4, team);
	return 0;
}