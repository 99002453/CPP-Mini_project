#include "Food.h"
#include "cereal.h"
#include "Nutrition.h"
#include <gtest/gtest.h>
#include<fstream>
#include<string>
using namespace std;
namespace {
class FoodTest : public ::testing::Test {
public:
  Food *ptr;  
    void SetUp() 
  			{ 
  			
		  		std::list<string> res;
		     		std::list<string> ::iterator iter;
		     		std::string name="";
		     		int cal=0,prot=0,fat=0,sod=0,sugar=0,pot=0,vit=0,shel=0;
		     		double fib=0.0,carb=0.0,rate=0.0;
		    		std::string S,T;
		    		fstream fin;
		    		int count=1;
		    		fin.open("cerealcsv.csv", ios::in);
		    		while(getline(fin, S))
		    		{
		    			stringstream X(S);
		    			while (getline(X, T,'\n'))
		   			 {
		   	 			res.push_back(T);
		    			 }
		   	        }
		    		iter=res.begin();
		   		 
		    		for(;iter!=res.end();++iter)
		    		{
		    			stringstream ss(*iter); 
		    			while (ss.good()) 
		    			{ 
						string substr; 
						getline(ss, substr, ','); 
						switch(count)
						{
							case 1:
								name=substr;
								break;
							case 2:
								cal=std::stoi(substr);
								break;
							case 3:
								prot=std::stoi(substr);
								break;
							case 4:
								fat=std::stoi(substr);
								break;
							case 5:
								sod=std::stoi(substr);
								break;
							case 6:
								fib=std::stod(substr);
								break;
							case 7:
								carb=std::stod(substr);
								break;
							case 8:
								sugar=std::stoi(substr);
								break;
							case 9:
								pot=std::stoi(substr);
								break;
							case 10:
								vit=std::stoi(substr);
								break;
							case 11:
								rate=std::stod(substr);
								break;	
							case 12:
								shel=std::stoi(substr);
											
								
ptr = new cereal(name,cal,prot,fat,sod,fib,carb,sugar,pot,vit,rate,shel);
name="",cal=0,prot=0,fat=0,sod=0,fib=0.0,carb=0.0,sugar=0,pot=0,vit=0,rate=0.0,shel=0,count=0;

								//break;
						
						}
						++count;
						
		    			} 
		  		}
    
 		}	  
  
  void TearDown() {
    delete ptr;
  }
};

TEST_F(FoodTest, DefaultConstructor) {
  cereal ft;
  EXPECT_EQ(0,ft.getSugars());
  EXPECT_EQ(0,ft.getfat());
  EXPECT_EQ(0,ft.getCalories());
  EXPECT_EQ(0,ft.getProteins());
}
TEST_F(FoodTest, ParameterizedConstructor) {
 cereal *ft = dynamic_cast<cereal*>(ptr);
  EXPECT_EQ(8, ft->getSugars());
  EXPECT_EQ(1, ft->getfat());
  EXPECT_EQ(110, ft->getCalories());
  EXPECT_EQ(2,ft->getProteins());
}
TEST_F(FoodTest, operatoroverloadingtest) {
  cereal ft1 ("Almonds",10,2,3,8,3.0,2.0,5.0,3,2,11.2,2);
   cereal ft2 ("raisins",7,2,9,1,0,5.0,5,5,9,12.2,30);
  EXPECT_EQ(17,ft1+ft2);
  
}
}
/*TEST_F(TripTest, ComputationTest) {
  EXPECT_EQ(8000, ptr->computeFare());      //800 * 10, INR 10 for each mile
  EXPECT_EQ(96, ptr->computeTravelTime());  //96 mins, if speed in 500 miles per hr
}
TEST_F(TripTest, AnotherTest) {
  FlightTrip ft("Bengaluru", "Chennai", "SG401", "SpiceJet", 200);
  Trip *pt = &ft;
  EXPECT_STREQ("Bengaluru", ft.getOrigin().c_str());
  EXPECT_STREQ("Chennai", ft.getDestination().c_str());
  EXPECT_STREQ("SG401", ft.getFlightNumber().c_str());
  EXPECT_STREQ("SpiceJet", ft.getOperator().c_str());
  EXPECT_EQ(200, ft.getDistance());
  EXPECT_EQ(2000, pt->computeFare());        //200 * 10 = 2000
  EXPECT_EQ(24, pt->computeTravelTime());    //24 mins, if speed is 500 miles per hr*/

 // namespace
/*int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}*/
