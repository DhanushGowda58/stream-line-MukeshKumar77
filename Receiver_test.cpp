#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMS_Receiver.h"


TEST_CASE("Retrieving data from console")
{
    REQUIRE(BMS_Receiver() == 0);
}
