/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray;

@interface ACDPairedDeviceAccountCache : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	BOOL _accountsIsValid;
	NSArray* _accounts;
	NSMutableArray* _completions;

}
+(id)sharedInstance;
-(void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFetchAccounts:(id)arg1 error:(id)arg2 ;
-(id)init;
-(void)invalidate;
@end

