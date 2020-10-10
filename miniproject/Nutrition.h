#ifndef NUTRITION_H_INCLUDED
#define NUTRITION_H_INCLUDED

#include "cereal.h"
#include "Food.h"

#include<iostream>

#include<string>
#include<list>


#include<iterator>
#include<fstream>

class Nutrition
{
protected:
	//std::list<cereal> cereals;
	
	
	/*std::list<string>::iterator itr;
	ifstream myfile;
	myfile.open("cerealdata.csv");
	while(myfile.good())
	{	
	        
		std::string line;
		getline(myfile,line,',');
		cereals.push_back(line);
	       
	}*/
	
	public:

   void addcereal(std::string f_name,int f_cal,int f_protein,int f_fat,int f_sodium,double f_fiber,double f_carbo,int f_sugars,int f_potass,int vitamins,double f_rating,int f_shelf);
   cereal* removecereal(std::string f_name);
   bool findCerealByName(std::string);
   double findAveragefat();
   int findMaxcalorie();
   int countAll();
   std::string bestCereal();
  //  int Sumofcalories();
   //std::list<cereal> loadingCSV();
   //bool comparebyproteins();
   // bool comparebysugars();
    
};
#endif 


