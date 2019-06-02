/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter {

	HMFMessageDestination* _target;
	NSArray* _whitelistedMessages;

}

@property (readonly) HMFMessageDestination * target;                  //@synthesize target=_target - In the implementation block
@property (copy,readonly) NSArray * whitelistedMessages;              //@synthesize whitelistedMessages=_whitelistedMessages - In the implementation block
+(id)logCategory;
-(id)logIdentifier;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)__shouldCheckMessage:(id)arg1 ;
-(id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2 ;
-(NSArray *)whitelistedMessages;
-(HMFMessageDestination *)target;
-(id)initWithTarget:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

