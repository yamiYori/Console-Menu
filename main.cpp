#include <iostream>
#include "UILayer.h"

int main(){

	//UI init...
	UISystemInit();
	SetDefaultUI("Menu01");
	UITransform("Menu01");
	system("pause");
	UITransform("Menu02");

	return 0;
}

