#pragma warning(disable : 4251)

#ifdef GAME_MODULE 
#define DLL_EXPORT __declspec( dllexport )
#else
#define DLL_EXPORT __declspec( dllimport )
#endif