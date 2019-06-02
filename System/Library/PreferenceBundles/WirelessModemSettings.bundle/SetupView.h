/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	long long _layoutDirection;

}
-(void)addStep:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)icon;
-(void)setIcon:(id)arg1 ;
@end

