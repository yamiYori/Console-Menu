#ifndef __UILAYER_H
#define __UILAYER_H

#include <Windows.h>
#include<vector>
#include <string>

#define UI_ADD(x)  do{menuBase * __tmp_menu = new x(); 			\
		__tmp_menu->numOfStatus = __tmp_menu->options.size();	\
		__tmp_menu->highLightedIndex = 0;						\
		UIregistion(__tmp_menu);}while(0)

using namespace std;

//abstract class
class menuBase{

public:
	static string cutline;

	string titleText;
	vector<string> options;		//option text
	vector<string> infos;		//help_info
	string uniqueID;			//Must be unique.
	int numOfStatus;

	int highLightedIndex;

	virtual void DrawMenu();
	virtual void StatusMove(int status) = 0;	//must override
	virtual void beforeOutPut(){};
	virtual void endOutPut(){};

	menuBase(string _titletext, vector<string>& _options, vector<string>& _infos){
		titleText = titleText;
		options = _options;
		infos = _infos;
		numOfStatus = options.size();
		highLightedIndex = 0;
	}
	menuBase(){;}

};

//UI system init
void UISystemInit();

void SetDefaultUI(string menuID);

void UIregistion(menuBase* pmenu);

void UITransform(string menuID);

#endif
