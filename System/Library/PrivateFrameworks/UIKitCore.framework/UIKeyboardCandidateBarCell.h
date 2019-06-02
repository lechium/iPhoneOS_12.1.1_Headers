/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIKBCacheableView.h>

@class NSString, UIKBThemedView, UILabel, UIView;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {

	BOOL _inExtendedView;
	BOOL _beginsFirstPage;
	BOOL _endsLastPage;
	BOOL _isAtLeftEdge;
	BOOL _isAutocorrectionCandidate;
	UIKBThemedView* _themedView;
	UILabel* _label;
	UILabel* _annotationLabel;
	UIView* _centeredBackgroundView;
	UIView* _proactiveCandidateView;
	NSString* _candidateText;
	NSString* _annotationText;

}

@property (nonatomic,retain) UIKBThemedView * themedView;                  //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * annotationLabel;                    //@synthesize annotationLabel=_annotationLabel - In the implementation block
@property (nonatomic,retain) UIView * centeredBackgroundView;              //@synthesize centeredBackgroundView=_centeredBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * proactiveCandidateView;              //@synthesize proactiveCandidateView=_proactiveCandidateView - In the implementation block
@property (nonatomic,copy) NSString * candidateText;                       //@synthesize candidateText=_candidateText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                      //@synthesize annotationText=_annotationText - In the implementation block
@property (assign,nonatomic) BOOL beginsFirstPage;                         //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) BOOL endsLastPage;                            //@synthesize endsLastPage=_endsLastPage - In the implementation block
@property (assign,nonatomic) BOOL isAtLeftEdge;                            //@synthesize isAtLeftEdge=_isAtLeftEdge - In the implementation block
@property (assign,nonatomic) BOOL isAutocorrectionCandidate;               //@synthesize isAutocorrectionCandidate=_isAutocorrectionCandidate - In the implementation block
@property (assign,nonatomic) BOOL inExtendedView;                          //@synthesize inExtendedView=_inExtendedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
+(id)font;
+(id)reuseIdentifier;
+(double)widthForCandidate:(id)arg1 ;
+(double)labelOffset;
+(BOOL)drawsSideBorders;
+(id)annotationFont;
+(UIEdgeInsets)cacheInsets;
+(id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4 ;
+(id)textColorWithHighlight:(BOOL)arg1 whiteText:(BOOL)arg2 ;
+(BOOL)highlightAffectsBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UILabel *)label;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setCandidate:(id)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(void)updateIsAtLeftEdgeState;
-(NSString *)annotationText;
-(BOOL)beginsFirstPage;
-(void)setBeginsFirstPage:(BOOL)arg1 ;
-(BOOL)endsLastPage;
-(void)setEndsLastPage:(BOOL)arg1 ;
-(void)setCandidateText:(NSString *)arg1 ;
-(void)setAnnotationText:(NSString *)arg1 ;
-(void)setIsAutocorrectionCandidate:(BOOL)arg1 ;
-(NSString *)candidateText;
-(UILabel *)annotationLabel;
-(void)setAnnotationLabel:(UILabel *)arg1 ;
-(UIView *)proactiveCandidateView;
-(void)setProactiveCandidateView:(UIView *)arg1 ;
-(UIView *)centeredBackgroundView;
-(void)updateLabels;
-(BOOL)isAutocorrectionCandidate;
-(UIKBThemedView *)themedView;
-(BOOL)isAtLeftEdge;
-(void)setIsAtLeftEdge:(BOOL)arg1 ;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(BOOL)inExtendedView;
-(void)setInExtendedView:(BOOL)arg1 ;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(void)setCenteredBackgroundView:(UIView *)arg1 ;
@end

