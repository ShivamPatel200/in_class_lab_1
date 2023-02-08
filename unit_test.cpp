#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "ECNumbers.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing my ECRemoveSpace function") {
    int lst0[] = {1,2,2,2,5,6,7,8,9};
    int lst1[] = {0,9,8,7,8,9,8};
    SUBCASE("normal functionality"){
        ECRemoveSpace(lst0, 9, 2);
        ECRemoveSpace(lst1, 7, 8); 
        CHECK(lst0[8] == 2);
        CHECK(lst0[7] == 2);
        CHECK(lst0[6] == 2);
        CHECK(lst1[6] == 8);
        CHECK(lst1[5] == 8);
        CHECK(lst1[4] == 8);
    }
    SUBCASE("where no x elements to remove exist") {
        int lst2[] = {1,2,2,2,5,6,7,8,9};
        int lst3[] = {0,9,8,7,8,9,8};
        ECRemoveSpace(lst2, 9, 3);
        ECRemoveSpace(lst3, 7, 6);
        for (int i = 0; i < 9; i++) {
            CHECK(lst2[i] != 3);
        }
        for (int i = 0; i < 7; i++) {
            CHECK(lst3[i] != 6);
        }
    }
    SUBCASE("one element") {
        int lst4[] = {1};
        ECRemoveSpace(lst4, 1, 1);
        CHECK(lst4[0] == 1);
    }
}
