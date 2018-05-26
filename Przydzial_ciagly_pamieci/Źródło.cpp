#include <iostream>

using namespace std;

int main(int argc, char* argv)
{
	int pamiec[10], proces[10], metoda=0, najlepszy=10;

	pamiec[0] = 6;
	pamiec[1] = 14;
	pamiec[2] = 40;
	pamiec[3] = 4;
	pamiec[4] = 8;
	pamiec[5] = 15;
	pamiec[6] = 2;
	pamiec[7] = 16;
	pamiec[8] = 6;
	pamiec[9] = 3;

	proces[0] = 5;
	proces[1] = 24;
	proces[2] = 6;
	proces[3] = 2;
	proces[4] = 5;
	proces[5] = 7;
	proces[6] = 11;
	proces[7] = 6;
	proces[8] = 15;
	proces[9] = 2;
	cin >> metoda;

	if (metoda == 1)
	{
		for (int n = 0; n < 10; n++)
		{
			for (int i = 0; i < 11; i++)
			{
				if (i == 10)
				{
					cout << "Brak miejsca dla procesu " << n << " o wartosci " << proces[n] << endl;
				}
				else
				{
					if (pamiec[i] >= proces[n])
					{
						cout << "Umieszczam proces " << n << " o wielkosci " << proces[n] << " w bloku pamieci nr " << i << " zostawiajac " << pamiec[i] - proces[n] << endl;
						pamiec[i] -= proces[n];
						break;
					}
				}
			}
		}
	}
	if (metoda == 2)
	{
		for (int n = 0; n < 10; n++)
		{
			for (int i = 0; i < 11; i++)
			{
				if (pamiec[i] >= proces[n])
					{
						//cout << "Umieszczam proces " << n << " o wielkosci " << proces[n] << " w bloku pamieci nr " << i << " zostawiajac " << pamiec[i] - proces[n] << endl;
						//pamiec[i] -= proces[n];
					if (najlepszy == 10)
						{
							najlepszy = i;
						}
					else if (pamiec[i] < pamiec[najlepszy])
						{
							najlepszy = i;
						}
					}
			}
			if (najlepszy != 10)
			{
				cout << "Umieszczam proces " << n << " o wielkosci " << proces[n] << " w bloku pamieci nr " << najlepszy << " zostawiajac " << pamiec[najlepszy] - proces[n] << endl;
				pamiec[najlepszy] -= proces[n];
			}
			else
			{
				cout << "Brak miejsca dla procesu " << n << " o wartosci " << proces[n] << endl;
			}
			najlepszy = 10;
		}
	}

	if (metoda == 3)
	{
		for (int n = 0; n < 10; n++)
		{
			for (int i = 0; i < 11; i++)
			{
				if (pamiec[i] >= proces[n])
				{
					//cout << "Umieszczam proces " << n << " o wielkosci " << proces[n] << " w bloku pamieci nr " << i << " zostawiajac " << pamiec[i] - proces[n] << endl;
					//pamiec[i] -= proces[n];
					if (najlepszy == 10)
					{
						najlepszy = i;
					}
					else if (pamiec[i] > pamiec[najlepszy])
					{
						najlepszy = i;
					}
				}
			}
			if (najlepszy != 10)
			{
				cout << "Umieszczam proces " << n << " o wielkosci " << proces[n] << " w bloku pamieci nr " << najlepszy << " zostawiajac " << pamiec[najlepszy] - proces[n] << endl;
				pamiec[najlepszy] -= proces[n];
			}
			else
			{
				cout << "Brak miejsca dla procesu " << n << " o wartosci " << proces[n] << endl;
			}
			najlepszy = 10;
		}
	}

	cout << endl;
	cout << "Kolejne pamieci to: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << pamiec[i] << endl;
	}


	system("PAUSE");
	return 0;
}