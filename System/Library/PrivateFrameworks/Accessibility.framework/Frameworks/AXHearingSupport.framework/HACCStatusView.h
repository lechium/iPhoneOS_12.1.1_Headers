/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UILabel, UIImageView, HACCBatteryGroupView, BCBatteryDevice, NSString;

@interface HACCStatusView : UIControl <HACCContentModule> {

	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UIImageView* _iconView;
	HACCBatteryGroupView* _batteryView;
	BCBatteryDevice* _batteryDevice;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                     //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HACCBatteryGroupView * batteryView;                         //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) BCBatteryDevice * batteryDevice;                            //@synthesize batteryDevice=_batteryDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
-(unsigned long long)module;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)updateValue;
-(void)setBatteryDevice:(BCBatteryDevice *)arg1 ;
-(BCBatteryDevice *)batteryDevice;
-(id)contentValue;
-(void)setModule:(unsigned long long)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id<HACCContentModuleDelegate>)delegate;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)enabled;
-(HACCBatteryGroupView *)batteryView;
-(void)setBatteryView:(HACCBatteryGroupView *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
@end

