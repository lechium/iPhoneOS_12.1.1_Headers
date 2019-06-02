/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSAttributedString, NSArray, NSString;

@interface _UIExpandingGlyphsView : UIView <CAAnimationDelegate> {

	BOOL _expandsFromLeftToRight;
	BOOL _fadesOut;
	int _remainingAnimationCount;
	NSAttributedString* _attributedString;
	double _baselineOffset;
	NSArray* _imageViews;
	/*^block*/id _completionBlock;
	CGSize _intrinsicSize;

}

@property (nonatomic,retain) NSArray * imageViews;                               //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,copy) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int remainingAnimationCount;                        //@synthesize remainingAnimationCount=_remainingAnimationCount - In the implementation block
@property (assign,nonatomic) CGSize intrinsicSize;                               //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                            //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) BOOL expandsFromLeftToRight;                        //@synthesize expandsFromLeftToRight=_expandsFromLeftToRight - In the implementation block
@property (assign,nonatomic) BOOL fadesOut;                                      //@synthesize fadesOut=_fadesOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSAttributedString *)attributedString;
-(void)setCompletionBlock:(id)arg1 ;
-(double)baselineOffset;
-(id)completionBlock;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)setExpandsFromLeftToRight:(BOOL)arg1 ;
-(void)animateCompletionBlock:(/*^block*/id)arg1 ;
-(void)setFadesOut:(BOOL)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(int)remainingAnimationCount;
-(void)setRemainingAnimationCount:(int)arg1 ;
-(BOOL)expandsFromLeftToRight;
-(BOOL)fadesOut;
-(CGSize)intrinsicSize;
-(void)setIntrinsicSize:(CGSize)arg1 ;
@end

