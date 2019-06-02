/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _MKStackViewDelegate, _MKAnimationStackViewDelegate;
@class NSArray, NSHashTable;

@interface _MKStackView : UIView {

	NSArray* _stackConstraints;
	NSHashTable* _viewsNeedingWidthConstraints;
	BOOL _bottomConstraintShouldBeGreaterThanOrEqual;
	id<_MKStackViewDelegate> _stackDelegate;
	NSArray* _stackedSubviews;
	id<_MKAnimationStackViewDelegate> _stackAnimationDelegate;

}

@property (assign,nonatomic,__weak) id<_MKStackViewDelegate> stackDelegate;                                //@synthesize stackDelegate=_stackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKAnimationStackViewDelegate> stackAnimationDelegate;              //@synthesize stackAnimationDelegate=_stackAnimationDelegate - In the implementation block
@property (nonatomic,copy) NSArray * stackedSubviews;                                                      //@synthesize stackedSubviews=_stackedSubviews - In the implementation block
@property (assign,nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual;                              //@synthesize bottomConstraintShouldBeGreaterThanOrEqual=_bottomConstraintShouldBeGreaterThanOrEqual - In the implementation block
-(void)setStackedSubviews:(NSArray *)arg1 ;
-(void)setStackedSubviews:(id)arg1 animated:(BOOL)arg2 ;
-(id<_MKStackViewDelegate>)stackDelegate;
-(void)setStackDelegate:(id<_MKStackViewDelegate>)arg1 ;
-(NSArray *)stackedSubviews;
-(id<_MKAnimationStackViewDelegate>)stackAnimationDelegate;
-(void)setStackAnimationDelegate:(id<_MKAnimationStackViewDelegate>)arg1 ;
-(BOOL)bottomConstraintShouldBeGreaterThanOrEqual;
-(void)setBottomConstraintShouldBeGreaterThanOrEqual:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)_createConstraints;
@end

