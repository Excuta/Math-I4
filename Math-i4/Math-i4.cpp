// Math-i4.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Math-i4.h"


// This is an example of an exported variable
MATHI4_API int nMathi4=0;

// This is an example of an exported function.
MATHI4_API int fnMathi4(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMathi4::CMathi4()
{
    return;
}
