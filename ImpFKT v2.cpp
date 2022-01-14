#include<iostream>
using namespace std;

double Berechnung(double a, double b, double c, double d, double e, double a1, double b1, double c1, double d1, int Std);
double Eingabe()
{
	double num1, num2, num3, num4, num5, num6, num7, num8, num9, br;
	int stda;
	cout << "Bitte geben Sie die Noten fuer alle Faecher ein." << endl;
	cout << "Planen von Anlagen und Arbeitsprozessen: ";
	cin >> num1;
	cout << endl << "Montage und Inbetriebnahme: ";
	cin >> num2;
	cout << endl << "Instandhaltung: ";
	cin >> num3;
	cout << endl << "Fremdsprachlichen Kommunikation: ";
	cin >> num4;
	cout << endl << "Wirtschafts- und Betriebslehre: ";
	cin >> num5;
	cout << endl << "Deutsch: ";
	cin >> num6;
	cout << endl << "Religion: ";
	cin >> num7;
	cout << endl << "Sport/Gesundheitsfoederung: ";
	cin >> num8;
	cout << endl << "Politik/Gesellschatslehre: ";
	cin >> num9;
	cout << endl << "Wie viele Faecher mit ueber 280 Stunden?" << endl;
	cin >> stda;
	
	br = Berechnung(num1, num2, num3, num4, num5, num6, num7, num8, num9,stda);
	
	return br;
}
double Berechnung(double a, double b, double c, double d, double e, double a1, double b1, double c1, double d1, int Std)
{
	double sum;
	switch (Std) 
	{
	case 1:
	{sum = ((a + 2 * b + c + d + e) / 6 + a1 + b1 + c1 + d1) / 5; }break;
	case 2:
	{sum = ((a + 2 * b + 2 * c + d + e) / 7 + a1 + b1 + c1 + d1) / 5; }break;
	default:
	{sum = ((a +  b + c + d + e) / 5 + a1 + b1 + c1 + d1) / 5;}break;
	}
	/*if (Std == 1)
		sum = ((a + 2*b+c+d+e)/6+a1+b1+c1+d1)/5; 
	else
		sum = ((a + 2 * b + 2 * c + d + e) / 7 + a1 + b1 + c1 + d1) / 5;  */
	return sum;
}
double Ausgabe()
{
	double conv1;
	int conv2;
	conv1 = Eingabe()*10;
	conv2 = conv1;
	conv1 = conv2;
	conv1 = conv1 / 10;
	
	if (conv1 < 1.6)
	{
		cout << "Sehr gut!" << endl;
	}

	else
	{
		if (conv1 < 2.6)
		{
			cout << "Gut!"  << endl;
		}

		else
		{
			if (conv1 < 3.6)
			{
				cout << "Befriedigend!" << endl;
			}

			else
			{
				if (conv1 < 4.6)
				{
					cout << "Ausreichend!" << endl;
				}
			}
		}
	}

	
	return conv1;
}
int main()
{
	cout << Ausgabe() << endl;


	return 0;
}