#include <iostream>
#include "ECNumbers.h"
using namespace std;

void output_int_array(int nums[], int length){
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";

    }
    cout << endl;
}
void ECRemoveSpace(int nums[], int length, int val)  {

    int backwards = length-1;


for(int i = 0; i < backwards; i++) {
    while (nums[i] == val) {
        int temp = nums[backwards];
        nums[backwards] = nums[i];
        nums[i] = temp;
        backwards--;

    } 
}

output_int_array(nums, length);
}