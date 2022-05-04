#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMS_Receiver.h"


TEST_CASE("Retrieving data from console")
{
    REQUIRE(BMS_Receiver() == 0);
}

TEST_CASE("Simple Moving Average -> Success Case")
{
    int Data[10] = {20,10,30,5,0,50,60,80,25,12};
    char entity[] = "Temperature";
    char unit[] = "degC - TESTCASE";
    REQUIRE(SimMovAvg(Data, entity, unit, 10) == float 45.4);
}

TEST_CASE("Simple Moving Average -> Failure Case")
{
    int Data[5] = {1,2,3,4,5};
    char entity[] = "Temperature";
    char unit[] = "degC - TESTCASE";
    REQUIRE(SimMovAvg(Data, entity, unit, 5) == 2.0);
}

