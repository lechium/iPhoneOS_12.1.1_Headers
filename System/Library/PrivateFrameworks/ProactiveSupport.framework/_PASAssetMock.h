/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PASAssetProtocol.h>

@protocol OS_dispatch_queue;
@class _PASNotificationTracker, NSObject, NSString, NSDictionary;

@interface _PASAssetMock : NSObject <_PASAssetProtocol> {

	_PASNotificationTracker* _updateNotificationTracker;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _resourceBasePath;
	NSDictionary* _matchingKeysAndValues;
	unsigned long long _assetVersion;
	NSString* _assetType;
	unsigned long long _compatibilityVersion;
	unsigned long long _bestAssetVersionObserved;

}

@property (nonatomic,readonly) NSDictionary * matchingKeysAndValues;                   //@synthesize matchingKeysAndValues=_matchingKeysAndValues - In the implementation block
@property (assign,nonatomic) unsigned long long assetVersion;                          //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSString * assetType;                                     //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) unsigned long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (assign,nonatomic) unsigned long long bestAssetVersionObserved;              //@synthesize bestAssetVersionObserved=_bestAssetVersionObserved - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssetType:(NSString *)arg1 ;
-(unsigned long long)bestAssetVersionObserved;
-(id)initWithResourceBasepath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 ;
-(void)triggerUpdateNotifications;
-(NSDictionary *)matchingKeysAndValues;
-(void)setBestAssetVersionObserved:(unsigned long long)arg1 ;
-(void)setCompatibilityVersion:(unsigned long long)arg1 ;
-(unsigned long long)assetVersion;
-(void)setAssetVersion:(unsigned long long)arg1 ;
-(NSString *)assetType;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2 ;
-(unsigned long long)compatibilityVersion;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(id)init;
@end

