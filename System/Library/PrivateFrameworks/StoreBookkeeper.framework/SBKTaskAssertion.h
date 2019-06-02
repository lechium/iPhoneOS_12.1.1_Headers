/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {

	/*^block*/id _expireHandler;
	NSString* _debugInfo;
	SBKProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
-(void)dealloc;
-(id)description;
-(void)invalidate;
@end
