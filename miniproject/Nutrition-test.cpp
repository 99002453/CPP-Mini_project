#include "Food.h"
#include "cereal.h"
#include "Nutrition.h"
#include <gtest/gtest.h>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int x=0;

namespace {
class NutritionTest : public ::testing::Test {
	public:
	Nutrition n;
	void loadcsv()
	{
		std::list<string> res;
		     		std::list<string> ::iterator iter;
		     		std::string name="";
		     		int cal=0,prot=0,fat=0,sod=0,sugar=0,pot=0,vit=0,shel=0;
		     		double fib=0.0,carb=0.0,rate=0.0;
		    		std::string S, T;
		    		fstream fin;
		    		int count=1;
		    		std::string substr; 
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
						
						getline(ss, substr, ','); 
						//
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
											
								
n.addcereal(name,cal,prot,fat,sod,fib,carb,sugar,pot,vit,rate,shel);
name="",cal=0,prot=0,fat=0,sod=0,fib=0.0,carb=0.0,sugar=0,pot=0,vit=0,rate=0.0,shel=0,count=0;
								break;
						
						}
						++count;
						
		    			}
		    			
		    			
		  		}
	
	}
 void SetUp() 
   
 { 
  	x=0;		
	loadcsv();	  		
		  		
    
 		}	 



  void TearDown() { }
  };
 
 


/*TEST_F(NutritionTest, AddCereal) {
  n.addcereal("Frosted Mini-Wheats",100,3,0,0,3.0,14.0,7,100,25,58.345141,2);
}*/

TEST_F(NutritionTest, counttest) {
 
  EXPECT_EQ(73, n.countAll());

}
TEST_F(NutritionTest, avgfattest) {
 
  EXPECT_DOUBLE_EQ(1.0273972602739727,n.findAveragefat());

}
TEST_F(NutritionTest, maxcalorietest) {
 
  EXPECT_EQ(160,n.findMaxcalorie());

}
TEST_F(NutritionTest, bestcereal) {
 
  EXPECT_EQ("Apple Jacks",n.bestCereal());

}
TEST_F(NutritionTest,findCerealByName) {
 
  EXPECT_EQ(true,n.findCerealByName("Apple Jacks"));

}
TEST_F(NutritionTest,removecereal) {
 
  EXPECT_EQ(NULL, n.removecereal("beetroot"));

}




}

