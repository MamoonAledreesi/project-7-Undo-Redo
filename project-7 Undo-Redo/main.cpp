
#include <iostream>
#include "clsMyString.h"
using namespace std;
int main()
{
	clsMyString S1;

	cout << "\n\n\t\t\t\tUndo/Redo Project\n\n"; 

	cout << "\nS1: " << S1.Value<<"\n";

	S1.Value = "Mamoon";
	cout << "\nS1   : " << S1.Value;
	S1.Value = "Mamoon2";
	cout << "\nS1   : " << S1.Value;
	S1.Value = "Mamoon3";
	cout << "\nS1   : " << S1.Value;
	
	cout << "\n\nUndo\n";
	cout << "-----------\n";

	S1.Undo();
	cout << "\nS1 after undo =  : " << S1.Value;

	S1.Undo();
	cout << "\nS1 after undo =  : " << S1.Value;

	S1.Undo();
	cout << "\nS1 after undo =  : " << S1.Value;

	cout << "\n\nredo\n";
	cout << "-----------\n";

	S1.Redo();
	cout << "\nS1 after redo =  : " << S1.Value;

	S1.Redo();
	cout << "\nS1 after redo =  : " << S1.Value;

	S1.Redo();
	cout << "\nS1 after redo =  : " << S1.Value;

	system("pause>0");
}

