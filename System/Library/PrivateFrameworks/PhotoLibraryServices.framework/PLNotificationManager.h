/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLNotificationUNCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, PLNotificationUNCenter, NSString;

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate> {

	BOOL _badgeCountIsInvalid;
	BOOL _enableTemporaryDebugMode;
	void* _addressBook;
	int _alertFiltrationEnabled;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _waitingAssetsAddNotifications;
	PLNotificationUNCenter* _UNCenter;

}

@property (nonatomic,retain) PLNotificationUNCenter * UNCenter;              //@synthesize UNCenter=_UNCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_notificationDeliveryDate;
+(id)_bestDateForDeliveringNotificationWithError:(id*)arg1 ;
+(NSObject*)filteredAlbumListForContentMode:(int)arg1 ;
+(id)sharedManager;
-(void)noteUserAssetsAreReadyForMomentShare:(id)arg1 ;
-(void)discardAllNotifications;
-(void)postNotificationForSuggestedCMMWithUUID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)removeNotificationForSuggestedCMMWithUUID:(id)arg1 ;
-(void)postNotificationForInterestingMemoryWithUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5 ;
-(void)removeNotificationForInterestingMemoryWithUUID:(id)arg1 ;
-(void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg1 ;
-(void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
-(void)noteDidReceiveLike:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidReceiveComment:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidChangePlaceholderKindForAsset:(id)arg1 fromOldKind:(short)arg2 forSharedAlbum:(id)arg3 mstreamdInfo:(id)arg4 ;
-(void)noteDidReceiveAssets:(id)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3 ;
-(void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg1 ;
-(unsigned long long)currentAppBadgeCountForNotificationUNCenter:(id)arg1 ;
-(void)noteInvitationRecordStatusChanged:(id)arg1 fromOldState:(long long)arg2 mstreamdInfo:(id)arg3 ;
-(id)_initSharedInstance;
-(void)setUNCenter:(PLNotificationUNCenter *)arg1 ;
-(PLNotificationUNCenter *)UNCenter;
-(BOOL)_shouldAllowAlertsFromContactWithEmail:(id)arg1 ;
-(void)_deleteNotificationsForAlbumWithUUID:(id)arg1 notificationTypes:(id)arg2 ;
-(void)_deleteNotificationsForAssetWithUUID:(id)arg1 shouldDeleteCommentsOrLikeNotifications:(BOOL)arg2 shouldDeletePhotosAddedToAlbumNotifications:(BOOL)arg3 ;
-(BOOL)enableTemporaryDebugMode;
-(id)_addWaitingNotification:(id)arg1 forPhotosBatchID:(id)arg2 ;
-(id)_waitingNotificationForPhotosBatchID:(id)arg1 ;
-(void)_removeWaitingNotificationForPhotosBatchID:(id)arg1 ;
-(void)_updateImageDataForNotification:(id)arg1 ;
-(void)triggerNotificationThumbnailUpdateForAsset:(id)arg1 ;
-(void)postNotificationForExpiringCMMsWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
-(void)_deleteNotificationsForObjectWithUUID:(id)arg1 notificationDictionaryKey:(id)arg2 notificationTypes:(id)arg3 ;
-(id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5 ;
-(id)_memoryNotificationFromDictionaryRepresentation:(id)arg1 ;
-(void)_deleteNotificationsForMemoriesWithUUID:(id)arg1 notificationTypes:(id)arg2 ;
-(BOOL)_notificationType:(long long)arg1 matchesCommentsOrLikeNotifications:(BOOL)arg2 andPhotosAddedToAlbumNotifications:(BOOL)arg3 ;
-(unsigned long long)_appBadgeCount;
-(void)getThumbnailImageDataAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_alertFiltrationEnabled;
-(void*)addressBook;
-(void)setEnableTemporaryDebugMode:(BOOL)arg1 ;
-(void)noteDidReceiveInvitationForSharedAlbum:(id)arg1 ;
-(void)noteDidDeleteSharedAlbum:(id)arg1 ;
-(void)noteMultipleContributorStatusChangedForAlbum:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteSharedAlbumUnseenStatusDidChange:(id)arg1 ;
-(void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg1 ;
-(void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg1 ;
-(void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg1 ;
-(void)noteUserDidViewCloudFeedContent:(long long)arg1 ;
-(void)noteUserDidNavigateIntoSharedAlbum:(id)arg1 ;
-(void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg1 ;
-(void)noteUserDidReadCommentOnSharedAsset:(id)arg1 ;
-(void)noteUserDidLeavePhotosApplication;
-(void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg1 ;
-(void)noteUserDidChangeStatusForMomentShare:(id)arg1 ;
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)calculateCurrentBadgeCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendResponse:(BOOL)arg1 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg2 ;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(BOOL)_isMyEmailAddress:(id)arg1 ;
-(void)_resetAlertFiltration;
-(id)init;
-(void)dealloc;
@end

