#include "Productmanagement.h"
#include "unity.h"

void setUp(){

}

void tearDown(){

}
void test_iscodeavail(void){

    TEST_ASSERT_EQUAL_FLOAT(1,isCodeAvailable("12345"));
}

int main(){

    UNITY_BEGIN();
    RUN_TEST(test_iscodeavail);
    return UNITY_END();
}