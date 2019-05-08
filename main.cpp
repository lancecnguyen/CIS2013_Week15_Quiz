#include <iostream>
#include <string>
#include "ToDo.cpp"

using namespace std;

int main(){
	char next = 'y';
	int num = 0;
	string action;
	string thing;
	ToDo list;
	
	while(next != 'x'){
		
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do: ";
		cin >> next;
		
		switch(next){
			case 'a':
				cout << "Name a todo item: ";
				getline(cin, action);
				cin >> thing;
				list.add(action);
				break;
			case 'd': 
				cout << "Which todo item is completed: ";
				cin >> num;
				list.complete(num);
				break;
			case 'p':
				list.print();
				break;
			case 'x':
				// All done with todo list
				break;
		}
	}
	
}