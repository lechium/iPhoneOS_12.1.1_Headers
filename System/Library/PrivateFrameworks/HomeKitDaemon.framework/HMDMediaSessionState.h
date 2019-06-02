/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {

	NSString* _sessionIdentifier;
	long long _playbackState;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;               //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) long long playbackState;                          //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)dumpState;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sessionIdentifier;
-(id)initWithSessionIdentifier:(id)arg1 ;
@end

