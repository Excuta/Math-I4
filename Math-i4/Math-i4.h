// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MATHI4_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MATHI4_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MATHI4_EXPORTS
#define MATHI4_API __declspec(dllexport)
#else
#define MATHI4_API __declspec(dllimport)
#endif

// This class is exported from the dll
class MATHI4_API CMathi4 {
public:
	CMathi4(void);
	// TODO: add your methods here.
};

extern MATHI4_API int nMathi4;

MATHI4_API int fnMathi4(void);
