#include "flip.h"
#include <cstring>
#include <sstream>

Flip::Flip()
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20");
}
Flip::Flip(int _value)
{
	std::stringstream sstream;

	switch (_vale)
	{
		case 0:
		case 1:
		case 2:
			sstream << "Flip l";
		case 3:
		default:
			break;
		
	}
	sstream<<"up "<<_value;
	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Flip::get_delay()
{ 
	return 5;
}