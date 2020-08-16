#include "pch.h"
#include "GrsClient.h"
#include "GrsClientImpl.h"

GrsClient* GetGrsClient(GrsBaseInfo* info) {
	GrsClientImpl*client = new GrsClientImpl(info);
	return reinterpret_cast<GrsClient*>(client);
}

void ReleaseGrsClient(GrsClient* client) {
	GrsClientImpl *impl = reinterpret_cast<GrsClientImpl*>(client);
	delete impl;
}