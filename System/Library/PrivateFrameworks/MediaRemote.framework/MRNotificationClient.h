/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet;

@interface MRNotificationClient : NSObject {

	unsigned long long _registeredNowPlayingObservers;
	NSObject*<OS_dispatch_queue> _customNotificationsQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSOrderedSet* _nowPlayingNotifications;
	NSOrderedSet* _routesChangedNotifications;
	NSOrderedSet* _volumeControlNotifications;
	NSOrderedSet* _externalScreenNotifications;
	NSOrderedSet* _originNotifications;
	NSOrderedSet* _supportedCommandsNotifications;
	NSOrderedSet* _voiceInputNotifications;
	NSOrderedSet* _errorNotifications;
	BOOL _receivesExternalScreenTypeChangedNotifications;
	BOOL _receivesSupportedCommandsNotifications;
	BOOL _receivesRoutesChangedNotifications;
	BOOL _receivesVolumeControlNotifications;
	BOOL _receivesOriginChangedNotifications;
	BOOL _receivesPlaybackErrorNotifications;
	BOOL _receivesVoiceInputRecordingStateNotifications;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue; 
@property (getter=isRegisteredForNowPlayingNotifications,nonatomic,readonly) BOOL registeredForNowPlayingNotifications; 
@property (assign,nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;                                                    //@synthesize receivesExternalScreenTypeChangedNotifications=_receivesExternalScreenTypeChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesSupportedCommandsNotifications;                                                            //@synthesize receivesSupportedCommandsNotifications=_receivesSupportedCommandsNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesRoutesChangedNotifications;                                                                //@synthesize receivesRoutesChangedNotifications=_receivesRoutesChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesVolumeControlNotifications;                                                                //@synthesize receivesVolumeControlNotifications=_receivesVolumeControlNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesOriginChangedNotifications;                                                                //@synthesize receivesOriginChangedNotifications=_receivesOriginChangedNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesPlaybackErrorNotifications;                                                                //@synthesize receivesPlaybackErrorNotifications=_receivesPlaybackErrorNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesVoiceInputRecordingStateNotifications;                                                     //@synthesize receivesVoiceInputRecordingStateNotifications=_receivesVoiceInputRecordingStateNotifications - In the implementation block
+(id)nowPlayingNotifications;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 ;
-(void)unregisterForNowPlayingNotifications;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(BOOL)arg2 ;
-(void)setReceivesSupportedCommandsNotifications:(BOOL)arg1 ;
-(BOOL)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 ;
-(BOOL)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)isRegisteredForNowPlayingNotifications;
-(void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 ;
-(BOOL)receivesExternalScreenTypeChangedNotifications;
-(void)setReceivesExternalScreenTypeChangedNotifications:(BOOL)arg1 ;
-(BOOL)receivesSupportedCommandsNotifications;
-(BOOL)receivesRoutesChangedNotifications;
-(void)setReceivesRoutesChangedNotifications:(BOOL)arg1 ;
-(BOOL)receivesVolumeControlNotifications;
-(void)setReceivesVolumeControlNotifications:(BOOL)arg1 ;
-(BOOL)receivesOriginChangedNotifications;
-(void)setReceivesOriginChangedNotifications:(BOOL)arg1 ;
-(BOOL)receivesPlaybackErrorNotifications;
-(void)setReceivesPlaybackErrorNotifications:(BOOL)arg1 ;
-(BOOL)receivesVoiceInputRecordingStateNotifications;
-(void)setReceivesVoiceInputRecordingStateNotifications:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(id)init;
@end

