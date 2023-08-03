#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"Which of the following is Tricontinental Country?",
	"what is the fifth planet in the solar system?",
	"Developer od c++?",
	"The first person to draw the map of earth?",
	"Who laid first step on the Moon?",
	"Who is the father of atomic bomb?",
	"Ogaden desert is present in__________?",
	"Capital of Australia is___________?",
	"Wadi Rum which resemblance to the surface of Mars is located in__________?",
	"Andaman & Nicobar Islands are in which Ocean?"
						};
	string options[10][4] = {
	{"chad","Chile","Mali","Swaziland"},
	{"Jupiter","Mars","Earth","None of these"},
	{"Steve Jobs","Bjarne Stroustrup","Dennis MacAllister","James Gosling"},
	{"Heraclitus","phythagoras","Anaximander","Thales"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
	{"Werner Heiserberg","Albert Einstein","Robert J Oppenheimer","None"},
	{"Europe","Asia","Africa","America"},
	{"Toronto","Melbourne","Sydney","Canberra"},
	{"Argentina","Israel","Jordan","Egypt"},
	{"Indian Ocean","Pacific Ocean","Bay of Bengal","Atlantic"},
					    };
	string correctOptions[10] = {
		"Chile","Jupiter","Bjarne Stroustrup","Anaximander",
		"Neil Armstrong","Robert J Oppenheimer","Africa",
		"Canberra","Jordan","Bay of Bengal"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	// Conducting Quiz
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//Printing Correct Options 
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//Printing Result 
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int Score = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				Score++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "You Scored : "<< Score <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	return 0;
}