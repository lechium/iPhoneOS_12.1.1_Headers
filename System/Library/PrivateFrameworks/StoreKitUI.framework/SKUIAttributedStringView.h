/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIReusableView.h>

@protocol SKUILinkHandler;
@class SKUIAttributedStringLayout, NSLayoutManager, NSArray, UIColor, NSTextContainer, NSTextStorage, NSString;

@interface SKUIAttributedStringView : UIView <SKUIReusableView> {

	double _calculatedTopInset;
	long long _firstLineTopInset;
	SKUIAttributedStringLayout* _layout;
	NSLayoutManager* _layoutManager;
	NSArray* _requiredBadges;
	long long _stringTreatment;
	BOOL _touchInside;
	NSRange _trackingRange;
	BOOL _trackingTouch;
	CGRect _textBounds;
	UIColor* _textColor;
	NSTextContainer* _textContainer;
	NSTextStorage* _textStorage;
	UIColor* _treatmentColor;
	BOOL _containsLinks;
	BOOL _textColorFollowsTintColor;
	id<SKUILinkHandler> _linkDelegate;
	long long _badgePlacement;

}

@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double firstBaselineOffset; 
@property (assign,nonatomic) long long firstLineTopInset;                          //@synthesize firstLineTopInset=_firstLineTopInset - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSArray * requiredBadges;                               //@synthesize requiredBadges=_requiredBadges - In the implementation block
@property (assign,nonatomic) long long badgePlacement;                             //@synthesize badgePlacement=_badgePlacement - In the implementation block
@property (assign,nonatomic) long long stringTreatment;                            //@synthesize stringTreatment=_stringTreatment - In the implementation block
@property (nonatomic,retain) UIColor * treatmentColor;                             //@synthesize treatmentColor=_treatmentColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                  //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                       //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (nonatomic,readonly) BOOL usesTallCharacterSet; 
@property (assign,nonatomic) BOOL containsLinks;                                   //@synthesize containsLinks=_containsLinks - In the implementation block
@property (assign,nonatomic,__weak) id<SKUILinkHandler> linkDelegate;              //@synthesize linkDelegate=_linkDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeWithLayout:(id)arg1 treatment:(long long)arg2 ;
-(void)setStringTreatment:(long long)arg1 ;
-(void)setTreatmentColor:(UIColor *)arg1 ;
-(BOOL)containsLinks;
-(void)setContainsLinks:(BOOL)arg1 ;
-(id<SKUILinkHandler>)linkDelegate;
-(void)setLinkDelegate:(id<SKUILinkHandler>)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(void)setRequiredBadges:(NSArray *)arg1 ;
-(void)viewWasRecycled;
-(BOOL)usesTallCharacterSet;
-(void)_reloadTopInset;
-(BOOL)_touchInsideLinkText:(CGPoint)arg1 linkTextRange:(NSRange*)arg2 ;
-(void)_setTrackingTouch:(BOOL)arg1 ;
-(void)_setTouchInside:(BOOL)arg1 ;
-(void)_setupTapLocatorContainer;
-(void)setFirstLineTopInset:(long long)arg1 ;
-(NSArray *)requiredBadges;
-(long long)stringTreatment;
-(UIColor *)treatmentColor;
-(long long)firstLineTopInset;
-(BOOL)textColorFollowsTintColor;
-(NSString *)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIAttributedStringLayout *)layout;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setLayout:(SKUIAttributedStringLayout *)arg1 ;
-(double)baselineOffset;
-(long long)badgePlacement;
-(void)setBadgePlacement:(long long)arg1 ;
-(double)firstBaselineOffset;
@end

