#include <iostream>
#include <ctime>
using namespace std;

int RollNDice(int n){
	
	srand(time(NULL));
	int total=0;
	for(int i=0; i<n;i++){
		int dice = rand()%6+1;
		total+=dice;
		cout<<"\tDice "<<i+1<<" "<<dice<<endl;
	}
	return total;
}

int main()
{	int choice=0;
	do{
		system("cls");
		cout<<"\t\t\t\tDice Roller"<<endl;
		cout<<"\t1-Roll Dice                          "<<endl;
		cout<<"\t2-Exit                               "<<endl;
		cout<<"\tYour choice: ";
		cin>>choice;
	}
	
	while(choice!=1 && choice!=2);
	
	if(choice==1){
		int numberOfdice=0;
		cout<<"\tEnter number of dices";
		cin>>numberOfdice;
		cout<<"\tTotal value of numbers on "<<numberOfdice<<" dice(s) is "<<RollNDice(numberOfdice)<<endl;
		
	}
	
	else if (choice==2){
		cout<<"\tProgram is terminating"<<endl;
		return 0;
	}
	return 0;
}
