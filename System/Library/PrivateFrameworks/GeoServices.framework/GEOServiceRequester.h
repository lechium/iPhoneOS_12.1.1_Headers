/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOServiceRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;

}
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(id)init;
@end

