#pragma once

#include<string>
using std::string;

#ifdef  GRS_WIN_EXPORT
#define DLL_ACCESS __declspec(dllexport)
#else
#define DLL_ACCESS __declspec(dllimport)
#endif

	class  GrsBaseInfo
	{
	public:
		virtual void setSerCountry(string &_serCountry) = 0;
		virtual void setRegCountry(char* _regCountry) = 0;
		virtual string GetSerCountry() = 0;
	};


	extern "C" DLL_ACCESS GrsBaseInfo * GetGrsBaseInfo();
	extern "C"  void DLL_ACCESS ReleaseGrsBaseInfo(GrsBaseInfo *info);
