#include <iostream>

float int_exp(float x, unsigned int n){

	float val = 1;
	for(int i=0;i<n;i++){
		val *= x;
	}

	return val;
}


//oh you want a very spesific signature .. my bad okok
//then assuming unfortunately u dont want me to make any cool algorithms ... 
//to calculate sqrt(5) ..... :(

float golden = 1.6180339887; //should be enough for maximal precision lol
float goldenPower(int n) {return int_exp(golden,n);}

int main(){

	
	
	for(int i=0;i<=21;i++){
		
		std::cout << goldenPower(i) << "\n" << std::endl;
		
	}




	return 0;
}
