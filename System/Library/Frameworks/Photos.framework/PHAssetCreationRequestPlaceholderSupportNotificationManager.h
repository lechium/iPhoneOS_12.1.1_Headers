/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _assetAvailabilityHandlers;

}
+(id)sharedManager;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(void)registerAssetAvailabilityHandler:(/*^block*/id)arg1 forAssetUUID:(id)arg2 ;
-(void)callCompletionHandlerForAssetUUID:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)assetAvailableNotification:(id)arg1 ;
-(void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1 ;
-(id)init;
@end

