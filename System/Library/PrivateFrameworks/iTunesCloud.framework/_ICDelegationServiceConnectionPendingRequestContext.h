/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject {

	ICPBDGSRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) ICPBDGSRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;               //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)responseHandler;
-(ICPBDGSRequest *)request;
@end

