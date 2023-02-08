#include <iostream>
#include "ECNumbers.h"
int main()
{
    int nums[] = {0,1,2,2,3,2,4,0};
    ECRemoveSpace(nums, 8, 2);

    int nums1[] = {0,6,6,6,9,89};
    ECRemoveSpace(nums1, 6, 6);
    return 0;
}
