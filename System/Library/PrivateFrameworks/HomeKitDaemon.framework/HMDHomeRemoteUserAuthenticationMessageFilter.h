/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDHomeRemoteUserAuthenticationMessageFilter : HMDMessageFilter <HMFLogging> {

	HMDHome* _home;

}

@property (__weak,readonly) HMDHome * home;                         //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)__shouldCheckMessage:(id)arg1 ;
@end

