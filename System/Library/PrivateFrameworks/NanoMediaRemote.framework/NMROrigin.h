/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMROriginMediaRemoteObserverNotificationHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface NMROrigin : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	void* _mediaRemoteOrigin;
	void* _deviceInfo;
	NSString* _cachedDisplayName;

}

@property (nonatomic,readonly) void* mediaRemoteOrigin; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) int originType; 
@property (nonatomic,readonly) NSNumber * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) void* deviceInfo; 
@property (nonatomic,readonly) long long logicalDeviceCount; 
+(void*)_originFromNotification:(id)arg1 ;
-(long long)logicalDeviceCount;
-(BOOL)updateDeviceInfo:(void*)arg1 ;
-(void*)deviceInfo;
-(void*)mediaRemoteOrigin;
-(id)initWithMROriginRef:(void*)arg1 ;
-(void)updateWithMROrigin:(void*)arg1 ;
-(int)originType;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)uniqueIdentifier;
-(BOOL)isLocal;
-(NSString *)displayName;
@end

