#include <stdio.h>

void firstMenu(){
	//if you all dont want a welcome greeting we can delete this 
	printf("Hello and Welcome to blah blah");
}
 
void inputMainMenu(){
	int userinputmain = 0; 
	printf("1. Map | 2. Region | 3. Route | 4. Driver\n");
	printf("Input: ");
	scanf("%d", &userinputmain); 
	
}

/*
	The structure below is the two option input structure 
	the first option will allow the user to load a file into     our variables 
	the second allows the user to enter manually 
	Both options will redirect the user to a different menu

we dont have to do files it sounds hard and im lazy 
*/
void inputMenu(){
	int userinputmenu = 0; 

	do{
	printf("\n\t1.Load File\n\t2.Keyboard\nInput: ");
	scanf("%d", &userinputmenu);

	if(userinputmenu == 1){
		//Load file menu
	}else{
		if(userinputmenu == 2){
			//keyboard
		}else{
			//manage errors 
			printf("\nPlease select option 1 or 2\n");
		}
	}
}while(userinputmenu != 2 && userinputmenu != 1);
	}

int main (void){

	firstMenu();
	inputMenu();
	
  return 0;
}