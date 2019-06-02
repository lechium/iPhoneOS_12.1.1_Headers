/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBFIrisWallpaperViewDelegate.h>

@class _UILegibilityLabel, SBSUIEffectsSegmentedControl, SBFLockScreenDateView, SBFWallpaperView, NSString;

@interface SBSUIWallpaperPreviewView : UIView <SBFIrisWallpaperViewDelegate> {

	BOOL _irisPossible;
	_UILegibilityLabel* _irisInstructionsLabel1;
	_UILegibilityLabel* _irisInstructionsLabel2;
	BOOL _observingParallaxChanges;
	BOOL _usingSegmentedControl;
	SBSUIEffectsSegmentedControl* _segmentedControl;
	SBFLockScreenDateView* _dateView;
	SBFWallpaperView* _wallpaperView;

}

@property (nonatomic,retain) SBSUIEffectsSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                             //@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,readonly) SBFWallpaperView * wallpaperView;                           //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * irisInstructionsLabel1;                  //@synthesize irisInstructionsLabel1=_irisInstructionsLabel1 - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * irisInstructionsLabel2;                  //@synthesize irisInstructionsLabel2=_irisInstructionsLabel2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldEnableParallaxForEffect:(unsigned long long)arg1 ;
-(void)irisWallpaperViewPlaybackStateDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperView:(id)arg2 ;
-(unsigned long long)selectedEffect;
-(void)setIrisInstructionsVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(_UILegibilityLabel *)irisInstructionsLabel1;
-(_UILegibilityLabel *)irisInstructionsLabel2;
-(void)_effectChanged:(id)arg1 ;
-(void)_updateSegmentedControl;
-(BOOL)shouldEnableParallax;
-(void)fadeOutIrisInstructions;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
-(void)_layoutSegmentedControl;
-(void)_layoutIrisInstructionLabels;
-(double)_segmentedControlInset;
-(void)_toggleMotion;
-(void)setIrisInstructionsLabel1:(_UILegibilityLabel *)arg1 ;
-(void)setIrisInstructionsLabel2:(_UILegibilityLabel *)arg1 ;
-(SBFWallpaperView *)wallpaperView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SBSUIEffectsSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(SBSUIEffectsSegmentedControl *)arg1 ;
-(SBFLockScreenDateView *)dateView;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
@end

