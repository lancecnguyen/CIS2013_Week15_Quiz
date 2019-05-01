#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int list = 0;
	string name;
	char next = 'x';

	cout << "How long is your list? ";
	cin >> list;
	
while (next != 'x'){
	

	
	cout << "\n" << "Add to list (a) \n" <<
	"Done list item (d)\n" << "Print list (p) \n" <<
	"Exit list app (x) \n" << "What do you want to do?";
	
	switch(next){
		case 'a':
			cout << "Name your new todo list: ";
			cin >> name;
		break;
		
		case 'd':
		
		break;
		
		case 'p':
		
		break;
		
		case 'x':
		
		break;
		
		
	}
	
	
}

	
	
	return 0;
}
