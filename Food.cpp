#include"Food.h"
#include <iostream>
#include<string>


	Food::Food():name(""),calories(0),protein(0),fat(0),sodium(0),fiber(0),carbo(0.0),sugars(0.0),potass(0),vitamins(0),rating(0.0){}
	Food::Food(std::string f_name,int f_cal,int f_protein,int f_fat,int f_sodium,double f_fiber,double f_carbo,int f_sugars,int f_potass,int f_vitamins,double f_rating):
	name(f_name),calories(f_cal),protein(f_protein),fat(f_fat),sodium(f_sodium),fiber(f_fiber),carbo(f_carbo),sugars(f_sugars),potass(f_potass),vitamins(f_vitamins),rating(f_rating){}
	Food::Food(const Food& obj): name(obj.name),calories(obj.calories),protein(obj.protein),fat(obj.fat),sodium(obj.sodium),fiber(obj.fiber),carbo(obj.carbo),sugars(obj.sugars),potass(obj.potass),vitamins(obj.vitamins),rating(obj.rating){}
	
		
		 int Food::getCalories()
		 {
		 	return calories;
		 }
		 int Food::getProteins()
		 {
		   return protein;
		 }
		 int Food::getSugars()
		 {
		 	 return sugars;
		 }
		 int Food::getfat()
		 {
		 	return fat;
		 }
		 double Food::getFibre()
		 {
			return fiber;
		 
		 }

