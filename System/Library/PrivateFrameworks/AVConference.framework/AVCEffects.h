/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSObject;

@interface AVCEffects : NSObject {

	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _avConferenceEffectsQueue;
	int _mode;
	BOOL _isEffectsApplied;
	BOOL _isFaceMeshTrackingEnabled;
	int _effectType;

}

@property (assign,nonatomic) int mode;                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int effectType;              //@synthesize effectType=_effectType - In the implementation block
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)avcVideoFrameDidRelease:(id)arg1 ;
-(void)setEffectType:(int)arg1 ;
-(void)encodeProcessedVideoFrame:(id)arg1 ;
-(int)effectType;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(int)mode;
-(void)setMode:(int)arg1 ;
@end

