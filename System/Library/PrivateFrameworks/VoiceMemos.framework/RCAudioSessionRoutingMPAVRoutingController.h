/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, NSString, RCAudioSessionRoutingAssertion, AVAudioSessionRouteDescription, AVAudioSessionPortDescription, MPAVRoute, NSArray;

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController {

	AVAudioSession* _audioSession;
	NSString* _audioSessionCategory;
	RCAudioSessionRoutingAssertion* _audioSessionAssertion;
	unsigned long long _audioSessionCategoryOptions;
	AVAudioSessionRouteDescription* _cachedCurrentRoute;
	BOOL _hasCategoryEverBeenActive;
	AVAudioSessionPortDescription* _cachedPickedInputRoutePortDescription;
	AVAudioSessionPortDescription* _cachedPickedOutputRoutePortDescription;
	MPAVRoute* _cachedPickedOutputRoute;
	NSArray* _cachedPickableOutputRoutes;

}

@property (nonatomic,readonly) AVAudioSessionPortDescription * cachedPickedInputRoutePortDescription;               //@synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription - In the implementation block
@property (nonatomic,readonly) AVAudioSessionPortDescription * cachedPickedOutputRoutePortDescription;              //@synthesize cachedPickedOutputRoutePortDescription=_cachedPickedOutputRoutePortDescription - In the implementation block
@property (nonatomic,readonly) MPAVRoute * cachedPickedOutputRoute;                                                 //@synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPickableOutputRoutes;                                                //@synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryEverBeenActive;                                                      //@synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive - In the implementation block
@property (nonatomic,readonly) BOOL isRoutingToAirPlayMirrorDestination; 
@property (nonatomic,readonly) BOOL isRoutingToPhoneCall; 
@property (nonatomic,readonly) BOOL isAudioSessionAppropriateForQueryingRoutes; 
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRoutingToPhoneCall;
-(long long)outputRouteTypeForNavigationIcon;
-(MPAVRoute *)cachedPickedOutputRoute;
-(void)enableDetailedDiscoveryMode;
-(void)disableDetailedDiscoveryMode;
-(AVAudioSessionPortDescription *)cachedPickedInputRoutePortDescription;
-(BOOL)isAudioSessionAppropriateForQueryingRoutes;
-(NSArray *)cachedPickableOutputRoutes;
-(BOOL)hasCategoryEverBeenActive;
-(BOOL)isRoutingToAirPlayMirrorDestination;
-(BOOL)makeAudioSessionCategoryActive:(id)arg1 ;
-(void)audioSessionInterruptionNotification:(id)arg1 ;
-(void)audioSessionRouteChangeNotification:(id)arg1 ;
-(id)_rcDelegate;
-(long long)_outputRouteFromAudioSession;
-(void)_updateHasCategoryEverBeenActive;
-(AVAudioSessionPortDescription *)cachedPickedOutputRoutePortDescription;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

