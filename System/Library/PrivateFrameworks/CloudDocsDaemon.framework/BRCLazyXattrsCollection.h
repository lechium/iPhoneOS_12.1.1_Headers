/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSMutableDictionary;

@interface BRCLazyXattrsCollection : NSObject {

	NSMutableData* _xattrNamesList;
	NSMutableData* _xattrNamesData;
	unsigned _xattrCount;
	unsigned _contentXattrCount;
	int _fd;
	long long _sizeLimit;
	long long _cacheSize;
	NSMutableDictionary* _cachedXattrs;

}
-(id)initWithFD:(int)arg1 sizeLimit:(long long)arg2 syncable:(BOOL)arg3 error:(id*)arg4 ;
-(unsigned)xattrNamesCount;
-(const char**)xattrNamesBegin;
-(unsigned)structuralXattrNamesCount;
-(const char**)structuralXattrNamesBegin;
-(unsigned)contentXattrNamesCount;
-(const char**)contentXattrNamesBegin;
-(const char*)xattrNamesListBegin;
-(const char*)xattrNamesListEnd;
-(const char**)xattrNamesEnd;
-(const char**)structuralXattrNamesEnd;
-(const char**)contentXattrNamesEnd;
-(id)getXattrValue:(id)arg1 error:(id*)arg2 ;
-(void)clearCache;
@end

