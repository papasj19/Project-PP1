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

typedef struct {
	int ID; 
	char name; 
	//coord 1
	//coord 2 upl 
	//coord 1 lr 
	//coord 2 lr 


}Region; 

void addRegion(){
/*
Creates a new region. Each region is defined by ID, name, upper-left and lower-right corners coordinates. All regions will be rectangular.
*/
	Region tmp_region; 
	printf("Enter the ID: ");
	scanf("%d", &tmp_region.ID);
	printf("Enter the name: ");
	scanf("%s", &tmp_region.name); 
	//printf("Enter the upper-left corners coordinates: ");
	//how should we stoer the coord 
	//printf("Enter the lower-right corners coordinates: ");
}

int main (void){

	//firstMenu();
	//inputMenu();
	
	addRegion(); 

  return 0;
}