#ifndef __UICUSTOM_H
#define __UICUSTOM_H

#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "UILayer.h"

//Official example: mainMenu
extern string defaultMenu;
extern menuBase* activeUI;

class Menu01:public menuBase{

public:
	Menu01(){
		titleText = "menu01";

		options.clear();
		options.push_back("option01");
		options.push_back("option02");
		options.push_back("option03");

		infos.clear();
		infos.push_back("info01");
		infos.push_back("info02");
		infos.push_back("info03");

		uniqueID = "Menu01";

		numOfStatus = options.size();
		highLightedIndex = 0;
		UIregistion(this);
	}



	void Fun01(){};
	void Fun02(){};
	void Fun03(){};

	void StatusMove(int status){
		switch(status){
		case 0:
			Fun01();
			break;
		case 1:
			Fun02();
			break;
		case 2:
			Fun03();
			break;
		default:
			std::cout<<"It shouldn't happen but there was an error."<<endl;
			break;
		}
	}
};

class Menu02:public menuBase{

public:
	Menu02(){
		titleText = "menu02";

		options.clear();
		options.push_back("option01");
		options.push_back("option02");
		options.push_back("option03");
		options.push_back("option04");

		infos.clear();
		infos.push_back("info01");
		infos.push_back("info02");
		infos.push_back("info03");
		infos.push_back("info04");

		uniqueID = "Menu02";

		numOfStatus = options.size();
		highLightedIndex = 0;
		UIregistion(this);
	}



	void Fun01(){};
	void Fun02(){};
	void Fun03(){};
	void Fun04(){};

	void StatusMove(int status){
		switch(status){
		case 0:
			Fun01();
			break;
		case 1:
			Fun02();
			break;
		case 2:
			Fun03();
			break;
		case 3:
			Fun04();
			break;
		default:
			std::cout<<"It shouldn't happen but there was an error."<<endl;
			break;
		}
	}

};

#endif
