#include <iostream>

using namespace std;



void InitializeGrid(short grid[][10]);


void ShowGrid(short grid[][10]);



int main() {












}
void InitializeGrid(short grid[][10])
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			grid[i][j] = 0;
		}
	}
}
void ShowGrid(short grid[][10])
{
	cout << "A B C D E F G H I J" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << grid[i][j] << " ";
		}
		cout << "\n";
	}
}
