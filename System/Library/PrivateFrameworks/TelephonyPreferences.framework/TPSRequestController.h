/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TPSRequest, NSMapTable, NSMutableOrderedSet, NSObject, CoreTelephonyClient;

@interface TPSRequestController : NSObject {

	TPSRequest* _pendingRequest;
	NSMapTable* _delegateToQueue;
	NSMutableOrderedSet* _requests;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	CoreTelephonyClient* _telephonyClient;

}

@property (nonatomic,readonly) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,retain) TPSRequest * pendingRequest;                                     //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * requests;                                  //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * telephonyClient;                         //@synthesize telephonyClient=_telephonyClient - In the implementation block
-(NSMutableOrderedSet *)requests;
-(void)addRequest:(id)arg1 ;
-(void)setRequests:(NSMutableOrderedSet *)arg1 ;
-(void)executeRequest:(id)arg1 ;
-(NSMapTable *)delegateToQueue;
-(void)execute;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(CoreTelephonyClient *)telephonyClient;
-(void)setPendingRequest:(TPSRequest *)arg1 ;
-(TPSRequest *)pendingRequest;
-(void)postResponse:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
@end
