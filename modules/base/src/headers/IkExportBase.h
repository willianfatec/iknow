/***************************************************************************
*	This file must be included in every HEADER FILE that has to be EXPORTED
****************************************************************************/

#ifdef WIN32
    #if _MSC_VER > 1000
    #pragma once
    #endif // _MSC_VER > 1000

    #ifdef BASE_EXPORTS
		#define BASE_API __declspec(dllexport)
    #else
		#define BASE_API __declspec(dllimport)
    #endif
#else
    #define BASE_API
#endif

