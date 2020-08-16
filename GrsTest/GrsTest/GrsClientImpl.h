#pragma once
#include"GrsClient.h"
class GrsClientImpl : GrsClient
{
public:
	GrsClientImpl(GrsBaseInfo* info);
	~GrsClientImpl();

	 string SyncGetGrsUrls(string& servername);
	 void AsyncGetGrsUrls(string& serverName, std::function<void(string url)> callback);

};

