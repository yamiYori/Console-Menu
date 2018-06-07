#include <iostream>
#include "UILayer.h"
#include "Controller.h"

int main(){

	//UI init...
	UISystemInit();
	SetDefaultUI("Menu01");
	UITransform("Menu01");

	//Demo start
	BattleControlOnline();// :P
	return 0;
}

