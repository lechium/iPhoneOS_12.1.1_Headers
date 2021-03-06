/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <SpringBoardFoundation/SBFButton.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol CCUIControlCenterButtonDelegate;
@class UIColor, UIImageView, UILabel, UIView, UIImage, UIFont, NSString;

@interface CCUIControlCenterButton : SBFButton <_UISettingsKeyObserver> {

	unsigned long long _buttonType;
	UIColor* _selectedColor;
	UIImageView* _glyphImageView;
	UILabel* _label;
	UIImageView* _alteredStateGlyphImageView;
	UILabel* _alteredStateLabel;
	UIView* _backgroundFlatColorView;
	BOOL _animatesStateChanges;
	BOOL _showingMenu;
	id<CCUIControlCenterButtonDelegate> _delegate;
	unsigned long long _roundCorners;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	double _naturalHeight;

}

@property (nonatomic,retain) UIImage * glyphImage;                                             //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedGlyphImage;                                     //@synthesize selectedGlyphImage=_selectedGlyphImage - In the implementation block
@property (assign,nonatomic) double naturalHeight;                                             //@synthesize naturalHeight=_naturalHeight - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIControlCenterButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL animatesStateChanges;                                        //@synthesize animatesStateChanges=_animatesStateChanges - In the implementation block
@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (assign,nonatomic) unsigned long long roundCorners;                                  //@synthesize roundCorners=_roundCorners - In the implementation block
@property (assign,getter=isShowingMenu,nonatomic) BOOL showingMenu;                            //@synthesize showingMenu=_showingMenu - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long numberOfLines; 
@property (nonatomic,retain) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonWithSelectedColor:(id)arg1 text:(id)arg2 type:(unsigned long long)arg3 ;
+(id)smallCircularButtonWithSelectedColor:(id)arg1 ;
+(id)circularButtonWithSelectedColor:(id)arg1 ;
+(id)roundRectButton;
+(id)roundRectButtonWithText:(id)arg1 ;
+(id)roundRectButtonWithText:(id)arg1 selectedGlyphColor:(id)arg2 ;
+(id)capsuleButtonWithText:(id)arg1 ;
-(void)_updateEffects;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(UIImage *)selectedGlyphImage;
-(BOOL)_drawingAsSelected;
-(double)naturalHeight;
-(void)_updateForStateChange;
-(long long)_currentState;
-(void)setShowingMenu:(BOOL)arg1 ;
-(BOOL)isShowingMenu;
-(id)initWithFrame:(CGRect)arg1 selectedColor:(id)arg2 text:(id)arg3 type:(unsigned long long)arg4 ;
-(BOOL)_isCircleButton;
-(BOOL)_isRectButton;
-(BOOL)_isCapsuleButton;
-(BOOL)_isTextButton;
-(void)_updateBackgroundForStateChange;
-(void)_pressAction;
-(void)_updateForReduceTransparencyChange;
-(void)_updateForDarkerSystemColorsChange:(id)arg1 ;
-(void)_calculateRectForGlyph:(CGRect*)arg1 rectForLabel:(CGRect*)arg2 ignoringBounds:(BOOL)arg3 ;
-(id)_glyphImageForState:(long long)arg1 ;
-(void)_updateNaturalHeight;
-(void)_updateGlyphAndTextForStateChange;
-(void)setNaturalHeight:(double)arg1 ;
-(id)_effectiveSelectedColor;
-(unsigned long long)roundCorners;
-(BOOL)animatesStateChanges;
-(id)_controlStateStringFromState:(long long)arg1 ;
-(BOOL)_isRectTextButton;
-(void)setRoundCorners:(unsigned long long)arg1 ;
-(void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 name:(id)arg3 ;
-(id)ccuiPunchOutMaskForView:(id)arg1 ;
-(void)setAnimatesStateChanges:(BOOL)arg1 ;
-(BOOL)isInternal;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CCUIControlCenterButtonDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(id<CCUIControlCenterButtonDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)_setButtonType:(unsigned long long)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)cornerRadius;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
@end

