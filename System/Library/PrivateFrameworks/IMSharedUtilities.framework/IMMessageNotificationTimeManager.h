/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, BKSApplicationStateMonitor;

@interface IMMessageNotificationTimeManager : NSObject {

	NSMutableDictionary* _chatsStartTimeDictionary;
	NSString* _latestIDSTokenURI;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (nonatomic,retain) NSMutableDictionary * chatsStartTimeDictionary;              //@synthesize chatsStartTimeDictionary=_chatsStartTimeDictionary - In the implementation block
@property (nonatomic,retain) NSString * latestIDSTokenURI;                                //@synthesize latestIDSTokenURI=_latestIDSTokenURI - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;                //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)chatsStartTimeDictionary;
-(long long)_getTimeWindowOverride;
-(BOOL)_isToneToggleSwitchOn;
-(long long)_getToneTimeWindow;
-(void)setLatestIDSTokenURI:(NSString *)arg1 ;
-(BOOL)_shouldSendNotificationForChatIdentifier:(id)arg1 ;
-(void)setDate:(id)arg1 forChatIdentifier:(id)arg2 ;
-(void)setLatestNotificationIDSTokenURI:(id)arg1 ;
-(void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)arg1 ;
-(void)acquireAssertionToUnsuspendProcess;
-(void)setChatsStartTimeDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)latestIDSTokenURI;
-(void)tearDownSessionForChatIdentifier:(id)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(id)init;
-(void)dealloc;
@end

