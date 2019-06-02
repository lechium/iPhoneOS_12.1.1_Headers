/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CRCarPlayAppPolicy : NSObject {

	BOOL _carPlaySupported;
	BOOL _canDisplayOnCarScreen;
	BOOL _launchUsingSiri;
	BOOL _launchUsingMusicUIService;
	BOOL _badgesAppIcon;
	BOOL _showsNotifications;
	BOOL _handlesCarIntents;
	BOOL _launchUsingMapsTemplateUI;
	NSDictionary* _siriActivationOptions;

}

@property (assign,getter=isCarPlaySupported,nonatomic) BOOL carPlaySupported;              //@synthesize carPlaySupported=_carPlaySupported - In the implementation block
@property (assign,nonatomic) BOOL canDisplayOnCarScreen;                                   //@synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen - In the implementation block
@property (assign,nonatomic) BOOL launchUsingSiri;                                         //@synthesize launchUsingSiri=_launchUsingSiri - In the implementation block
@property (nonatomic,copy) NSDictionary * siriActivationOptions;                           //@synthesize siriActivationOptions=_siriActivationOptions - In the implementation block
@property (assign,nonatomic) BOOL launchUsingMusicUIService;                               //@synthesize launchUsingMusicUIService=_launchUsingMusicUIService - In the implementation block
@property (assign,nonatomic) BOOL badgesAppIcon;                                           //@synthesize badgesAppIcon=_badgesAppIcon - In the implementation block
@property (assign,nonatomic) BOOL showsNotifications;                                      //@synthesize showsNotifications=_showsNotifications - In the implementation block
@property (assign,nonatomic) BOOL handlesCarIntents;                                       //@synthesize handlesCarIntents=_handlesCarIntents - In the implementation block
@property (assign,nonatomic) BOOL launchUsingMapsTemplateUI;                               //@synthesize launchUsingMapsTemplateUI=_launchUsingMapsTemplateUI - In the implementation block
-(void)setLaunchUsingSiri:(BOOL)arg1 ;
-(BOOL)launchUsingSiri;
-(void)setCarPlaySupported:(BOOL)arg1 ;
-(void)setCanDisplayOnCarScreen:(BOOL)arg1 ;
-(void)setSiriActivationOptions:(NSDictionary *)arg1 ;
-(void)setLaunchUsingMusicUIService:(BOOL)arg1 ;
-(void)setBadgesAppIcon:(BOOL)arg1 ;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(void)setHandlesCarIntents:(BOOL)arg1 ;
-(void)setLaunchUsingMapsTemplateUI:(BOOL)arg1 ;
-(BOOL)isCarPlaySupported;
-(BOOL)canDisplayOnCarScreen;
-(NSDictionary *)siriActivationOptions;
-(BOOL)launchUsingMusicUIService;
-(BOOL)badgesAppIcon;
-(BOOL)handlesCarIntents;
-(BOOL)launchUsingMapsTemplateUI;
-(BOOL)showsNotifications;
-(id)init;
@end

