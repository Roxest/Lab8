#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int rows,int amount){
	if (rows <= 0 || amount <= 0){
		cout << "Invalid input";
		cout << endl;
	}else{
		for (int i = 0;i<rows;i++){
			for (int j = 0;j< amount ; j++){
				cout << "O";
			}
		cout << endl;
	}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
