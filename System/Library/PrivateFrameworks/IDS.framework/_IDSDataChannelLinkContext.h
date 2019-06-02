/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData;

@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _flags;
	unsigned char _networkType;
	long long _connectionType;
	unsigned long long _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned long long _remoteRATType;
	unsigned _maxBitrate;
	NSUUID* _linkUUID;
	NSUUID* _QRSessionID;
	long long _relayServerProvider;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	BOOL _serverIsDegraded;

}
-(id)description;
@end

