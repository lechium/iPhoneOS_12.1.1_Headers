/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NTKColoringLabel, UILayoutGuide;

@interface NTKUpNextMatchupUpcomingView : UIView {

	UIImageView* _homeLogoImageView;
	UIImageView* _awayLogoImageView;
	NTKColoringLabel* _versusLabel;
	NTKColoringLabel* _descriptionLabel;
	UILayoutGuide* _homeLogoLayoutGuide;
	UILayoutGuide* _awayLogoLayoutGuide;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
-(void)configureWithMatchup:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
@end

