#include "Nutrition.h"
#include "Food.h"
#include "cereal.h"
#include <list>
#include <iterator>
#include <string>
#include<fstream>
#include<iostream>
std::list<cereal> cereals;

	

void Nutrition::addcereal(std::string f_name,int f_cal,int f_protein,int f_fat,int f_sodium,double f_fiber,double f_carbo,int f_sugars,int f_potass,int f_vitamins,double f_rating,int f_shelf)
{
	
cereals.push_back(cereal(f_name, f_cal, f_protein, f_fat, f_sodium, f_fiber, f_carbo, f_sugars, f_potass, f_vitamins, f_rating, f_shelf));

}
   cereal* Nutrition::removecereal(std::string f_name)
{
   	std::list<cereal> :: iterator iter;

    for(iter=cereals.begin();iter!=cereals.end();++iter)
    {
        if(iter->getcerealname()== f_name)
        {
           cereals.erase(iter);
           break;
        }
    }
    return NULL;
}
   bool Nutrition::findCerealByName(std::string c_name)
   {
   	 std::list<cereal> :: iterator iter;

    for(iter=cereals.begin();iter!=cereals.end();++iter)
    {
        if(c_name == iter->getcerealname())
        {
            return true;
        }
    }
    return false; 
  }
   double Nutrition::findAveragefat()
   {
   	 double sum=0;
    std:: list <cereal>::iterator iter;
    for(iter=cereals.begin();iter!=cereals.end();++iter)
    {
        sum = sum+iter->getfat();
    }

    return sum/cereals.size();
   
   }
   int Nutrition::findMaxcalorie()
   {
   	 std:: list<cereal> :: iterator iter = cereals.begin();
    auto maxFat  = iter->getCalories();
   // auto maxiter = iter;
    iter++;
    for(;iter!=cereals.end();++iter)
    {
        if(maxFat < iter->getCalories())
        {
            maxFat = iter->getCalories();
           // maxiter = iter;
        }

    }
    return maxFat; 
   }
   int Nutrition::countAll()
   {
   	/* std:: list<cereal>::iterator iter;
   	int count=0;
   	 for(iter=cereals.begin();iter!=cereals.end();iter++)
    {
       count=count+1;
    }*/
   	 return cereals.size();
   
   }
   std::string Nutrition::bestCereal()
   {
   std::list<cereal>::iterator iter= cereals.begin();;
   	int count=0;
   	auto min_iter=iter;
   	int minval=cereals.begin()->getfat();
   	++iter;
   for(;iter!=cereals.end();++iter)
   {
       if(iter->getfat()<minval)
       {
        minval=iter->getfat();
        min_iter=iter;
        }
   }
   return min_iter->getcerealname();
   }
  
   
   
 
   
  // bool comparebyproteins();
  
    //bool comparebysugars();
    
   
