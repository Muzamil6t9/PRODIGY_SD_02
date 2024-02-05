#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	char inpt;
	int userin;
	int nmbratmpt=0;
	cout<<"\t\t******WELCOME******\n\t******Number Guessing Game******\n\n";
	cout<<"******************************************************\n";
	do {
		srand(0);
		int vrbl=(rand()%10) +1;
		cout<<"Enter any number between (1 - 10)   > ";
		cin>>userin;
		cout<<endl;
		if(userin==vrbl) {
			cout<<"Congratulations!\nYou Guess the correct number\n";
			nmbratmpt++;
			cout<<"Your number of attempts are  -> "<<nmbratmpt<<endl;
			cout<<"Do you want to try again Y/N     > ";
			cin>>inpt;
			cout<<endl;
			if(inpt != 'N') {
				nmbratmpt=0;
			}
			
		}
		else if(userin>vrbl){
			cout<<"The number is High\n";
			nmbratmpt++;
		}
		else if(userin<vrbl){
			cout<<"The number is Small\n";
			nmbratmpt++;
		}
		
	}
	while(inpt != 'N');
		cout<<"-> GAME OVER <-";
		
}
