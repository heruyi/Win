#pragma once

#include"GrsBaseInfo.h"
#include<string>
#include<map>
#include<functional>

using std::string;
using  std::map;

class GrsClient
{
public:

	virtual string SyncGetGrsUrls(string& servername) = 0;
	virtual void AsyncGetGrsUrls(string& serverName, std::function<void(string url)> callback) = 0;
};

#ifdef  GRS_WIN_EXPORT
#define DLL_ACCESS __declspec(dllexport)
#else
#define DLL_ACCESS __declspec(dllimport)
#endif

extern "C" DLL_ACCESS GrsClient * GetGrsClient(GrsBaseInfo *info);
extern "C"  void DLL_ACCESS ReleaseGrsClient(GrsClient * client);