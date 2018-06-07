#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include "UILayer.h"
#include "UICustom.h"
using namespace std;

//Color support...
static WORD titleTextTheme 			= BACKGROUND_BLUE|BACKGROUND_GREEN;
static WORD highLightedTextTheme 	= BACKGROUND_RED|BACKGROUND_GREEN;
static WORD normalTextTheme 		= FOREGROUND_INTENSITY;
static HANDLE handle;

static vector<menuBase*>menus;

string menuBase::cutline = "=====================================";

//ActiveUIControlPanel
menuBase* activeUI;
string defaultMenu = "";

void UISystemInit(){
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	menus.clear();

/**///Add your owen menu/////**/
/**/	UI_ADD(Menu01);		/**/
/**/	UI_ADD(Menu02);		/**/
/**/						/**/
/**/////////TODO:////////////**/
}

void SetDefaultUI(string menuID){
	for(unsigned i=0;i<menus.size();i++){
		if(menuID == menus[i]->uniqueID){
			defaultMenu = menuID;
			return;
		}
	}

	//Case not found...
	std::cout<<"UniqueID not found："<<menuID<<endl;
	system("pause");
	if(activeUI!=nullptr){	//If possible,repaint active UI...
		activeUI->DrawMenu();
	}
}


void UIregistion(menuBase* pmenu){
	menus.push_back(pmenu);
}

void UITransform(string menuID){
	for(unsigned i=0;i<menus.size();i++){
		if(menuID == menus[i]->uniqueID){
			activeUI = menus[i];
			menus[i]->DrawMenu();

			return;
		}
	}
	//Case not Found...
	std::cout<<"UniqueID not found："<<menuID<<endl;
	system("pause");
	if(activeUI!=nullptr){	//If possible,repaint active UI...
		activeUI->DrawMenu();
	}
}

void menuBase::DrawMenu(){

	system("cls");

	//Out put title text...
	SetConsoleTextAttribute(handle, titleTextTheme);
	std::cout<<titleText<<endl;
	SetConsoleTextAttribute(handle, normalTextTheme);
	std::cout<<cutline<<endl;

	//Out put before Draw..
	beforeOutPut();

	//Draw options...
	for(int i = 0;i<numOfStatus;i++){
		if(i==highLightedIndex){
			SetConsoleTextAttribute(handle,highLightedTextTheme);
			std::cout<<i+1<<". "<<options[i]<<endl;
			SetConsoleTextAttribute(handle,normalTextTheme);
		}else{
			std::cout<<i+1<<". "<<options[i]<<endl;
		}
	}

	//Draw helping info...
	if(numOfStatus!=0){
		std::cout<<cutline<<endl;
		std::cout<<infos[highLightedIndex]<<endl;
	}

	//Out put after Draw...
	endOutPut();
}
