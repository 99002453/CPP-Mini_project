#ifndef __FOOD_H
#define __FOOD_H
#include<cstdint>
#include<string>
#include<list>
class Food
{
 protected:
	std::string name;
	int calories;
	int protein;
	int fat;
	int sodium;
	 double fiber;
	double carbo;
	 int sugars;
	int potass;
	int vitamins;
	
	//int weight;
	//float weight;
	double rating;
	public:
		Food();
		Food(std::string,int,int,int,int,double,double,int,int,int,double);
		Food(const  Food&);
		virtual int calcFatCalories()=0;
		virtual bool bestFood()=0;
		virtual bool RatedorNotrated()=0;
		 int getCalories();
		 int getProteins();
		 
		 int getSugars();
		 int getfat();
		 double getFibre();
		
		
		
		
};
#endif
