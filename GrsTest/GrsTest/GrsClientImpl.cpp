#include "pch.h"
#include "GrsClientImpl.h"

GrsClientImpl::GrsClientImpl(GrsBaseInfo* info) {
	printf("%s", info->GetSerCountry().c_str());
}

GrsClientImpl::~GrsClientImpl() {

}

void GrsClientImpl::AsyncGetGrsUrls(string& serverName, std::function<void(string url)> callback) {
	callback(string("AsyncGetGrsUrls"));
}

string GrsClientImpl::SyncGetGrsUrls(string& servername) {
	return string("SyncGetGrsUrls");
}
