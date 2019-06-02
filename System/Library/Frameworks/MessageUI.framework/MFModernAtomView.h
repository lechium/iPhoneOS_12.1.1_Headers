/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIDefaultKeyboardInput.h>
#import <libobjc.A.dylib/MFModernAtomViewResembling.h>

@class MFModernAtomIconView, UIColor, UIView, MFModernAtomBackgroundView, UILabel, UIActivityIndicatorView, NSString, UIFont;

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling> {

	MFModernAtomIconView* _badgeIconView;
	MFModernAtomIconView* _accessoryIconView;
	UIColor* _effectiveTintColor;
	unsigned long long _disabledPresentationOptions;
	UIView* _baselineView;
	MFModernAtomBackgroundView* _background;
	UIView* _compositingView;
	UIView* _titleLabelFillView;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	double _scalingFactor;
	BOOL _wrappingSupported;
	BOOL _cachedIsWrappingEnabled;
	BOOL _isPrimaryAddressAtom;
	BOOL _separatorHidden;
	BOOL _separatorIsLeftAligned;
	BOOL _selected;
	NSString* _title;
	UIFont* _titleFont;
	unsigned long long _presentationOptions;
	double _firstLineIndent;

}

@property (nonatomic,readonly) MFModernAtomBackgroundView * backgroundView; 
@property (nonatomic,readonly) MFModernAtomIconView * badgeIconView;                         //@synthesize badgeIconView=_badgeIconView - In the implementation block
@property (nonatomic,readonly) MFModernAtomIconView * accessoryIconView;                     //@synthesize accessoryIconView=_accessoryIconView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long effectivePresentationOptions; 
@property (nonatomic,readonly) UIColor * effectiveTintColor; 
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (assign,nonatomic) double firstLineIndent;                                         //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom;                                      //@synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom - In the implementation block
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden;                                           //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL separatorIsLeftAligned;                                    //@synthesize separatorIsLeftAligned=_separatorIsLeftAligned - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions;                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont;                                             //@synthesize titleFont=_titleFont - In the implementation block
+(BOOL)presentationOptions:(unsigned long long*)arg1 encodedIntoAddress:(id)arg2 ;
+(id)_defaultTintColor;
+(id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)arg1 ;
+(id)primaryAtomFont;
+(id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(BOOL)arg2 ;
+(id)_failureTintColor;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long*)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6 ;
+(CGPoint)defaultBaselinePoint;
+(id)defaultFont;
+(double)defaultHeight;
+(double)horizontalPadding;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)_updateActivityIndicator;
-(id)initWithFrame:(CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 wrappingSupported:(BOOL)arg4 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1 ;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(double)preferredWidthWithSizeConstraints:(CGSize)arg1 ;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1 ;
-(BOOL)separatorHidden;
-(BOOL)separatorIsLeftAligned;
-(BOOL)isWrappingEnabled;
-(void)_updateSubviewsForWrapping;
-(void)_invalidatePresentationOptions;
-(int)_preferredIconVariant;
-(void)_setEffectiveTintColor:(id)arg1 ;
-(id)_chevronTextAttachment;
-(id)_centeredTextAttachmentWithImage:(id)arg1 ;
-(void)_updateCompositingFilters;
-(void)_setPresentationOption:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(double)_leftPadding;
-(double)_rightPadding;
-(void)_updateFontIfNecessary;
-(double)_leftInset;
-(double)_rightInset;
-(void)appendPresentationOption:(unsigned long long)arg1 ;
-(void)clearPresentationOption:(unsigned long long)arg1 ;
-(unsigned long long)effectivePresentationOptions;
-(MFModernAtomIconView *)accessoryIconView;
-(MFModernAtomIconView *)badgeIconView;
-(unsigned long long)presentationOptions;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(UIColor *)effectiveTintColor;
-(double)firstLineIndent;
-(void)setFirstLineIndent:(double)arg1 ;
-(void)dealloc;
-(double)scale;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(MFModernAtomBackgroundView *)backgroundView;
-(UIEdgeInsets)edgeInsets;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)_updateLabelAttributes;
-(BOOL)isSelected;
-(void)setScale:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)viewForLastBaselineLayout;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(double)preferredWidth;
-(CGPoint)baselinePoint;
-(CGRect)selectionFrame;
@end

