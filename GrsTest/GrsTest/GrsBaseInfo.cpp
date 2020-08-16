#include "pch.h"
#include "GrsBaseInfo.h"
#include "GrsBaseInfoImpl.h"

GrsBaseInfo* GetGrsBaseInfo() {
	GrsBaseInfoImpl *impl = new GrsBaseInfoImpl();
	return reinterpret_cast<GrsBaseInfo *>(impl);
}

void ReleaseGrsBaseInfo(GrsBaseInfo* info) {
	if (info == nullptr) {
		return;
	}
	GrsBaseInfoImpl* impl = reinterpret_cast<GrsBaseInfoImpl*>(info);
	delete impl;
}
