/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInterfaceActionVisualSeparatorDisplayingUIInterfaceActionVisualSectionSeparatorDisplaying;
@class UIView, NSLayoutConstraint;

@interface _UIInterfaceActionSeparatorConstraintController : NSObject {

	double _constantAxisDimension;
	UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> _separatorView;
	NSLayoutConstraint* _fixedHeightConstraint;
	NSLayoutConstraint* _fixedWidthConstraint;
	long long _constantSizedAxis;

}

@property (nonatomic,__weak,readonly) UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying> separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedHeightConstraint;                                                                                                //@synthesize fixedHeightConstraint=_fixedHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * fixedWidthConstraint;                                                                                                 //@synthesize fixedWidthConstraint=_fixedWidthConstraint - In the implementation block
@property (assign,nonatomic) long long constantSizedAxis;                                                                                                                 //@synthesize constantSizedAxis=_constantSizedAxis - In the implementation block
@property (assign,nonatomic) double constantAxisDimension;                                                                                                                //@synthesize constantAxisDimension=_constantAxisDimension - In the implementation block
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(void)_updateConstantSizedConstraints;
-(BOOL)_isFixedWidth;
-(double)constantAxisDimension;
-(id)initWithSeparatorView:(id)arg1 ;
-(void)separatorViewDidUpdateConstraints;
-(UIView*<UIInterfaceActionVisualSeparatorDisplaying>*<UIInterfaceActionVisualSectionSeparatorDisplaying>)separatorView;
-(NSLayoutConstraint *)fixedHeightConstraint;
-(NSLayoutConstraint *)fixedWidthConstraint;
-(long long)constantSizedAxis;
@end

