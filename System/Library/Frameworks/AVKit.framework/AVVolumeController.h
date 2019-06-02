/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, AVSystemController;

@interface AVVolumeController : NSObject {

	BOOL _changingVolume;
	BOOL _currentRouteHasVolumeControl;
	BOOL _prefersSystemVolumeHUDHidden;
	BOOL _prefersSystemVolumeHUDHiddenInternal;
	BOOL _EUVolumeLimitEnabled;
	BOOL _EUVolumeLimitOverridden;
	BOOL _volumeChangesThrottled;
	BOOL _canOverrideEUVolumeLimit;
	BOOL _fullyInitialized;
	float _volume;
	float _EUVolumeLimit;
	NSNumber* _targetVolumeInternal;
	NSNumber* _maximumTargetVolumeSinceChangingVolumeBegan;
	NSString* _volumeCategory;
	AVSystemController* _sharedSystemController;

}

@property (assign,nonatomic) BOOL prefersSystemVolumeHUDHidden;                                          //@synthesize prefersSystemVolumeHUDHidden=_prefersSystemVolumeHUDHidden - In the implementation block
@property (assign,getter=isChangingVolume,nonatomic) BOOL changingVolume;                                //@synthesize changingVolume=_changingVolume - In the implementation block
@property (assign,nonatomic) BOOL currentRouteHasVolumeControl;                                          //@synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL prefersSystemVolumeHUDHiddenInternal;                                  //@synthesize prefersSystemVolumeHUDHiddenInternal=_prefersSystemVolumeHUDHiddenInternal - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                        //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (assign,getter=isEUVolumeLimitEnabled,nonatomic) BOOL EUVolumeLimitEnabled;                    //@synthesize EUVolumeLimitEnabled=_EUVolumeLimitEnabled - In the implementation block
@property (assign,getter=isEUVolumeLimitOverridden,nonatomic) BOOL EUVolumeLimitOverridden;              //@synthesize EUVolumeLimitOverridden=_EUVolumeLimitOverridden - In the implementation block
@property (assign,nonatomic) float volume;                                                               //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL volumeChangesThrottled;                                                //@synthesize volumeChangesThrottled=_volumeChangesThrottled - In the implementation block
@property (assign,nonatomic) BOOL canOverrideEUVolumeLimit;                                              //@synthesize canOverrideEUVolumeLimit=_canOverrideEUVolumeLimit - In the implementation block
@property (nonatomic,retain) NSNumber * targetVolumeInternal;                                            //@synthesize targetVolumeInternal=_targetVolumeInternal - In the implementation block
@property (nonatomic,retain) NSNumber * maximumTargetVolumeSinceChangingVolumeBegan;                     //@synthesize maximumTargetVolumeSinceChangingVolumeBegan=_maximumTargetVolumeSinceChangingVolumeBegan - In the implementation block
@property (nonatomic,readonly) NSString * volumeCategory;                                                //@synthesize volumeCategory=_volumeCategory - In the implementation block
@property (nonatomic,retain) AVSystemController * sharedSystemController;                                //@synthesize sharedSystemController=_sharedSystemController - In the implementation block
@property (assign,getter=isFullyInitialized,nonatomic) BOOL fullyInitialized;                            //@synthesize fullyInitialized=_fullyInitialized - In the implementation block
@property (nonatomic,readonly) float effectiveVolumeLimit; 
+(id)clientsPreferringVolumeHUDHidden;
+(id)sharedVolumeController;
-(float)EUVolumeLimit;
-(BOOL)currentRouteHasVolumeControl;
-(void)beginChangingVolume;
-(void)endChangingVolume;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 ;
-(void)setPrefersSystemVolumeHUDHidden:(BOOL)arg1 ;
-(void)setPrefersSystemVolumeHUDHiddenInternal:(BOOL)arg1 ;
-(void)setTargetVolume:(float)arg1 ;
-(float)effectiveVolumeLimit;
-(void)_observeSystemController;
-(void)_unobserveSystemController;
-(void)_handleSystemControllerServerDiedNotification;
-(void)_handleEUVolumeLimitDidChangeNotification:(id)arg1 ;
-(void)_handleSystemVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1 ;
-(void)_applyProposedVolumeIfNeeded;
-(void)_applyProposedVolumeImmediately;
-(void)_performOnMainThread:(/*^block*/id)arg1 ;
-(BOOL)isChangingVolume;
-(void)setChangingVolume:(BOOL)arg1 ;
-(void)setCurrentRouteHasVolumeControl:(BOOL)arg1 ;
-(BOOL)prefersSystemVolumeHUDHidden;
-(BOOL)prefersSystemVolumeHUDHiddenInternal;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isEUVolumeLimitEnabled;
-(void)setEUVolumeLimitEnabled:(BOOL)arg1 ;
-(BOOL)isEUVolumeLimitOverridden;
-(void)setEUVolumeLimitOverridden:(BOOL)arg1 ;
-(BOOL)volumeChangesThrottled;
-(void)setVolumeChangesThrottled:(BOOL)arg1 ;
-(BOOL)canOverrideEUVolumeLimit;
-(void)setCanOverrideEUVolumeLimit:(BOOL)arg1 ;
-(NSNumber *)targetVolumeInternal;
-(void)setTargetVolumeInternal:(NSNumber *)arg1 ;
-(NSNumber *)maximumTargetVolumeSinceChangingVolumeBegan;
-(void)setMaximumTargetVolumeSinceChangingVolumeBegan:(NSNumber *)arg1 ;
-(NSString *)volumeCategory;
-(AVSystemController *)sharedSystemController;
-(void)setSharedSystemController:(AVSystemController *)arg1 ;
-(BOOL)isFullyInitialized;
-(void)setFullyInitialized:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 ;
@end

