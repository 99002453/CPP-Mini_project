#include "Food.h"
#include "cereal.h"
#include "Nutrition.h"
#include <gtest/gtest.h>
namespace {

class FoodTest : public ::testing::Test {

protected:
  void SetUp() { // override {
    ptr = new cereal("Frosted Mini-Wheats",100,3,0,0,3,14,7,100,25,58.345141,2);    
  }
  void TearDown() {
    delete ptr;
  }
  Food *ptr;  
};

TEST_F(FoodTest, DefaultConstructor) {
  cereal ft;
  EXPECT_EQ(0, ft.getSugars());
  EXPECT_EQ(0, ft.getfat());
  EXPECT_EQ(0, ft.getCalories());
  EXPECT_EQ(0, ft.getProteins());
}
TEST_F(FoodTest, ParameterizedConstructor) {
  cereal *ft = dynamic_cast<cereal*>(ptr);
   EXPECT_EQ(7, ft->getSugars());
  EXPECT_EQ(0, ft->getfat());
  EXPECT_EQ(100, ft->getCalories());
  EXPECT_EQ(3,ft->getProteins());
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

} // namespace
/*int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}*/
