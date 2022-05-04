#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMS_Receiver.h"

printf("=========================== TEST CASES ===========================\n");
TEST_CASE("Computing MinMax")
{
    int Data[10] = {20,10,30,5,-1,50,60,80,25,12};
    char entity[] = "Temperature";
    char unit[] = "degC - TESTCASE";
    REQUIRE(findMinMax(Data, entity, unit, 10) == 80);
}

TEST_CASE("Computing Average")
{
    int Data[10] = {20,10,30,5,0,50,60,80,25,12};
    char entity[] = "Temperature";
    char unit[] = "degC - TESTCASE";
    REQUIRE(Avg(Data, entity, unit, 10) == float (29.2));
}

TEST_CASE("Simple Moving Average")
{
    int Data[10] = {20,10,30,5,0,50,60,80,25,12};
    char entity[] = "Temperature";
    char unit[] = "degC - TESTCASE";
    REQUIRE(SimMovAvg(Data, entity, unit, 10) == float (45.4));
}

