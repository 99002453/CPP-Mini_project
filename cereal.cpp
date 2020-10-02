#include "cereal.h"
#include "Food.h"

		cereal::cereal():Food(),shelf(0){ }
 	 	cereal::cereal(std::string f_name,int f_cal,int f_protein,int f_fat,int f_sodium,double f_fiber,double f_carbo,int f_sugars,int f_potass,int f_vitamins,double f_rating,int f_shelf):Food( f_name, f_cal, f_protein, f_fat, f_sodium, f_fiber, f_carbo, f_sugars, f_potass, f_vitamins, f_rating),shelf(f_shelf){}
 	 	//cereal(const  cereal&):Food
   int cereal::calcFatCalories()
		{
		
			return (9*calories);
		}
    bool cereal::bestFood()
		{
		if(sugars<=5.0 && fiber>=3 && fat<=3)
			return true;
		else 
			return false;			
		}
  int cereal::getShelf()
		{
			return shelf;
		}
	bool cereal::RatedorNotrated()
		{
		
			if(rating>=75.0 && rating<=100.0 )
				return true;
			else
				return false;	
		}
std::string  cereal::getcerealname()
		{
		return Food::name;
		
		}
int cereal::operator +(const cereal &obj1)
   {
   return calories+obj1.calories;
   
   }
