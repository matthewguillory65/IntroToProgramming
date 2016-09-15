#include <iostream>
#include "TheAssessment.h"

using namespace std;

int main()
{


	Utility newUtil = Utility("Dylan");
	newUtil.UtilityLength();

	Utility newUtilAcc;
	newUtil.UtilityAccess();

	Utility newUtilComp;
	newUtil.UtilityCompare();

	Utility newUtilAtt;
	newUtil.UtilityAppend();

	//Utility newUtilPrep;
	//newUtil.UtilityPrepend();



	system("pause");
	return 1;
}