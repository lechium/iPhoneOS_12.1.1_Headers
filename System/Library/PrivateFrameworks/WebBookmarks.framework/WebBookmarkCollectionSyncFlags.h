/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface WebBookmarkCollectionSyncFlags : NSObject {

	BOOL _syncAllowed;
	BOOL _postSyncNotificationWhenUnlocking;
	BOOL _unlockSyncRequested;
	int _syncLockFileDescriptor;
	long long _syncNotificationType;
	NSMutableSet* _lockSyncHoldRequestorPointers;

}

@property (nonatomic,readonly) BOOL syncAllowed;                                          //@synthesize syncAllowed=_syncAllowed - In the implementation block
@property (assign,nonatomic) int syncLockFileDescriptor;                                  //@synthesize syncLockFileDescriptor=_syncLockFileDescriptor - In the implementation block
@property (assign,nonatomic) long long syncNotificationType;                              //@synthesize syncNotificationType=_syncNotificationType - In the implementation block
@property (assign,nonatomic) BOOL postSyncNotificationWhenUnlocking;                      //@synthesize postSyncNotificationWhenUnlocking=_postSyncNotificationWhenUnlocking - In the implementation block
@property (nonatomic,readonly) NSMutableSet * lockSyncHoldRequestorPointers;              //@synthesize lockSyncHoldRequestorPointers=_lockSyncHoldRequestorPointers - In the implementation block
@property (assign,nonatomic) BOOL unlockSyncRequested;                                    //@synthesize unlockSyncRequested=_unlockSyncRequested - In the implementation block
-(int)syncLockFileDescriptor;
-(void)setUnlockSyncRequested:(BOOL)arg1 ;
-(void)setSyncLockFileDescriptor:(int)arg1 ;
-(NSMutableSet *)lockSyncHoldRequestorPointers;
-(BOOL)postSyncNotificationWhenUnlocking;
-(void)setPostSyncNotificationWhenUnlocking:(BOOL)arg1 ;
-(BOOL)unlockSyncRequested;
-(void)setSyncNotificationType:(long long)arg1 ;
-(BOOL)syncAllowed;
-(long long)syncNotificationType;
-(id)initWithSyncAllowed:(BOOL)arg1 ;
@end

