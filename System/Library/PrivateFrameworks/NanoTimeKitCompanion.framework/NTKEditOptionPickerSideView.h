/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface NTKEditOptionPickerSideView : UIView {

	double _contentAlpha;
	CGAffineTransform _contentTransform;
	UIView* _optionView;

}

@property (nonatomic,retain) UIView * optionView;              //@synthesize optionView=_optionView - In the implementation block
-(void)setOptionView:(UIView *)arg1 ;
-(UIView *)optionView;
-(void)setRotationFromFront:(double)arg1 ;
-(void)applyContentTransform:(CGAffineTransform)arg1 ;
-(void)_applyContentAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
@end

