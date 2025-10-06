#include <iostream>

namespace userDefined{
	int x = 36;
	int cout(){
		return x;
	}
}

int myGlobal = 25;

int cout(){
	return myGlobal*myGlobal;
}

int main(){
	int cout = 23;
	std::cout<<"The variable in userDefined namespace is "<< userDefined::x<< std::endl;
	std::cout<<"The value of myGlobal  is "<< myGlobal<<std::endl;
	std::cout<<"The local variable cout in main is "<< cout<<std:: endl;
	std::cout <<"The output of cout() in userDefined is "<< userDefined::cout()<< std::endl;
	std::cout <<" The output of global cout() is "<<::cout<< std::endl;
	
return 0;
}