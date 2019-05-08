#ifndef TODO_CPP
#define TODO_CPP

#include <iostream>
#include <string>
using namespace std;

class ToDo {
	private:
		
		string list[100];
		int length = 0;
	
	public:
	
		ToDo(){
			length = 0;
		}
		
		void add(string action){
			list[length] = action;
			length++;
		}
		
		void complete(int x){
			string newList[100];
			int newListNum = 0;
			for(int i=0;i<100;i++){
				if((i+1)== x){
					//Do not copy
					newListNum++;
				} else {
					newList[i] = list[newListNum];
					newListNum++;
				}
			}
			std::copy(list, list + 100, newList);
		}
		
		void print(){
			for(int i=0;i<length;i++){
				cout << "Item " << (i+1) << ": " << list[i] << endl;
			}
		}
};


#endif