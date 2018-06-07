#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "UILayer.h"
#include "definations.h"
#include "Controller.h"

//Sign of UI control
bool ControllerOpen;

//Active UI control panel
extern menuBase* activeUI;

//Open Controller
int BattleControlOnline(){
	ControllerOpen = true;

	if(activeUI==nullptr){
		std::cout<<"activeUI bad"<<endl;
		exit(1);
	}

	while(ControllerOpen){

		int num= getch();

		switch (num){
		case ESC:
			activeUI->highLightedIndex = activeUI->numOfStatus - 1;
			activeUI->DrawMenu();
			break;

		case UPARROW:
		case KEYW:
			if(activeUI->highLightedIndex>0){
				activeUI->highLightedIndex--;
			}
			activeUI->DrawMenu();
			break;

		case DOWNARROW:
		case KEYS:
			if(activeUI->highLightedIndex < activeUI->numOfStatus - 1){
				(activeUI->highLightedIndex)++;
			}
			activeUI->DrawMenu();
			break;

		case SPACE:
		case ENTER_BIG:
			activeUI->StatusMove(activeUI->highLightedIndex);
		}
	}
}

//Close
void BattleControlTerminated(){
	ControllerOpen = false;
}

