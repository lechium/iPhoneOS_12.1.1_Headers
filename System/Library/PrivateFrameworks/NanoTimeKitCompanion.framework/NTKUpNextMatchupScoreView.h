/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NTKColoringLabel, NSDate, CLKFont, UILayoutGuide, NSArray;

@interface NTKUpNextMatchupScoreView : UIView {

	UIImageView* _homeLogoImageView;
	NTKColoringLabel* _homeNameLabel;
	NTKColoringLabel* _homeDescriptionLabel;
	UIImageView* _awayLogoIamgeView;
	NTKColoringLabel* _awayNameLabel;
	NTKColoringLabel* _awayDescriptionLabel;
	NTKColoringLabel* _statusLabel;
	NTKColoringLabel* _timeLabel;
	NSDate* _timeForLabel;
	CLKFont* _boldMatchupFont;
	CLKFont* _regularMatchupFont;
	CLKFont* _statusFont;
	UILayoutGuide* _logoLayoutGuide;
	UILayoutGuide* _descriptionLayoutGuide;
	NSArray* _withLogoLayoutConstraints;
	NSArray* _withoutDateLayoutConstraints;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
+(id)_timeStringForFetchDate:(id)arg1 ;
-(void)updateTimeLabel;
-(void)configureWithMatchup:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
@end

