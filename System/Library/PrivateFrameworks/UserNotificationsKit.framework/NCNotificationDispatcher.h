/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationAlertDestinationDelegate.h>
#import <libobjc.A.dylib/NCNotificationDestinationDelegate.h>

@protocol NCNotificationDispatcherDelegate, NCAlertingController;
@class NCNotificationDestinationsRegistry, NCNotificationStore, NCNotificationAlertQueue, NSMutableDictionary, NSHashTable, NSString;

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate> {

	id<NCNotificationDispatcherDelegate> _delegate;
	NCNotificationDestinationsRegistry* _destinationsRegistry;
	NCNotificationStore* _notificationStore;
	NCNotificationAlertQueue* _alertQueue;
	NSMutableDictionary* _sectionSettings;
	NSHashTable* _sourceDelegates;
	id<NCAlertingController> _alertingController;

}

@property (nonatomic,retain) NCNotificationDestinationsRegistry * destinationsRegistry;              //@synthesize destinationsRegistry=_destinationsRegistry - In the implementation block
@property (nonatomic,retain) NCNotificationStore * notificationStore;                                //@synthesize notificationStore=_notificationStore - In the implementation block
@property (nonatomic,retain) NCNotificationAlertQueue * alertQueue;                                  //@synthesize alertQueue=_alertQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionSettings;                                  //@synthesize sectionSettings=_sectionSettings - In the implementation block
@property (nonatomic,retain) NSHashTable * sourceDelegates;                                          //@synthesize sourceDelegates=_sourceDelegates - In the implementation block
@property (nonatomic,retain) id<NCAlertingController> alertingController;                            //@synthesize alertingController=_alertingController - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationDispatcherDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(NCNotificationDestinationsRegistry *)destinationsRegistry;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3 ;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(void)setDestinationsRegistry:(NCNotificationDestinationsRegistry *)arg1 ;
-(NCNotificationStore *)notificationStore;
-(id<NCAlertingController>)alertingController;
-(BOOL)_shouldPostNotificationRequest:(id)arg1 ;
-(void)_willPostNotificationRequest:(id)arg1 ;
-(void)_performOperationForRequestDestinations:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_didPostNotificationRequest:(id)arg1 ;
-(void)_clearUnsafeNotification:(id)arg1 ;
-(void)_didRemoveNotificationRequest:(id)arg1 ;
-(NSMutableDictionary *)sectionSettings;
-(BOOL)_isRegisteredDestination:(id)arg1 ;
-(void)_registerAlertDestination:(id)arg1 ;
-(void)_registerDestination:(id)arg1 ;
-(NSHashTable *)sourceDelegates;
-(BOOL)_layoutsInProgressContainsNotificationRequest:(id)arg1 ;
-(void)_addNotificationRequestToLayoutsInProgress:(id)arg1 ;
-(void)_removeNotificationRequestFromLayoutsInProgress:(id)arg1 ;
-(id)_notificationLayoutsInProgress;
-(void)_setNotificationLayoutsInProgress:(id)arg1 ;
-(id)initWithAlertingController:(id)arg1 ;
-(void)removeDispatcherSourceDelegate:(id)arg1 ;
-(void)setNotificationStore:(NCNotificationStore *)arg1 ;
-(void)setSectionSettings:(NSMutableDictionary *)arg1 ;
-(void)setSourceDelegates:(NSHashTable *)arg1 ;
-(void)setAlertingController:(id<NCAlertingController>)arg1 ;
-(NCNotificationAlertQueue *)alertQueue;
-(void)setAlertQueue:(NCNotificationAlertQueue *)arg1 ;
-(void)addDispatcherSourceDelegate:(id)arg1 ;
-(void)postNotificationWithRequest:(id)arg1 ;
-(void)modifyNotificationWithRequest:(id)arg1 ;
-(void)withdrawNotificationWithRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(void)removeNotificationSectionWithIdentifier:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<NCNotificationDispatcherDelegate>)arg1 ;
-(id<NCNotificationDispatcherDelegate>)delegate;
@end

