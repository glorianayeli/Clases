#include "iostream"
#include <math.h>
#include <stdlib.h>
using namespace std;
bool triangulo(int copuesto, int cadyacente, int hipotenusa);
void valores(int copuesto, int cadyacente, int hipotenusa);
int main()
{
	int copuesto, cadyacente, hipotenusa;
	for (int x = 1; x <= 50; x++)
		for (int y = 1; y <= 50; y++)
			for (int z = 1; z <= 50; z++)
				valores(x, y, z);
			
	system("pause");
    return 0;
}
bool triangulo(int copuesto, int cadyacente, int hipotenusa)
{
	if (pow(copuesto, 2) + pow(cadyacente, 2) == pow(hipotenusa, 2))
		return true;
	else
		return false;
}
void valores(int copuesto, int cadyacente, int hipotenusa)
{
	if (triangulo(copuesto, cadyacente, hipotenusa))
		cout << copuesto << "\t" << cadyacente<< "\t" << hipotenusa<<endl;
}
