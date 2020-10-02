#ifndef __CEREAL_H
#define __CEREAL_H

#include<string>
#include<cstdint>

#include "Food.h"

class cereal : public Food
 {
	 int shelf;
 	 public:
 	 	cereal();
 	 	cereal(std::string,int,int,int,int,double,double,int,int,int,double,int);
 	 	//cereal(const  cereal&);
 	 	int calcFatCalories();
		bool bestFood();
		int getShelf();
		std::string getcerealname();
		bool RatedorNotrated();
		int operator +(const cereal &obj1);
 
};
#endif
