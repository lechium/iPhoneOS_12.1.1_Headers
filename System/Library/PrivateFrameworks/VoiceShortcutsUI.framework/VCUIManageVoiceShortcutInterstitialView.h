/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUI/VCUIManageVoiceShortcutView.h>

@class UILabel, NSLayoutConstraint;

@interface VCUIManageVoiceShortcutInterstitialView : VCUIManageVoiceShortcutView {

	UILabel* _statusLabel;
	NSLayoutConstraint* _minHeightConstraint;

}

@property (nonatomic,retain) UILabel * statusLabel;                                 //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minHeightConstraint;              //@synthesize minHeightConstraint=_minHeightConstraint - In the implementation block
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(id)initWithController:(id)arg1 ;
-(NSLayoutConstraint *)minHeightConstraint;
-(void)setMinHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithController:(id)arg1 options:(id)arg2 ;
-(BOOL)showRecordingButtonOverlay;
-(void)updateScrollViewHeight:(double)arg1 ;
@end
