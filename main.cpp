
#include <iostream>

using namespace std;
//void Namer::counter{
//if (x)

//}

int main(int argc, char *argv[])
{
	string x;
	cout << "Please enter a string" << endl;
	getline(cin, x);
	Namer.open(x);

	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}