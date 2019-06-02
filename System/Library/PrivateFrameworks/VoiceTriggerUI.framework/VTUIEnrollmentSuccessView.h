/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>

@class UIView, VTUIButton;

@interface VTUIEnrollmentSuccessView : VTUIEnrollmentStateView {

	UIView* _footerView;
	VTUIButton* _finishButton;

}

@property (nonatomic,readonly) VTUIButton * finishButton;              //@synthesize finishButton=_finishButton - In the implementation block
-(void)_setupContent;
-(void)_setupImage;
-(id)_createFooter;
-(BOOL)suppressFinishButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)finishButton;
-(id)footerView;
@end
