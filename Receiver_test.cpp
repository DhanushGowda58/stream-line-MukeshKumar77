#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMS_Receiver.h"

FILE* fptr;
int sensorData[NUMBERS_OF_READINGS];

TEST_CASE("Retrieving data to console")
{
    REQUIRE(BMS_Receiver() == 0);
}
