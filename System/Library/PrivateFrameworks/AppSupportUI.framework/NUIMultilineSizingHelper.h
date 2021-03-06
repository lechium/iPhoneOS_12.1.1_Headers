/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@class UIView;

@interface NUIMultilineSizingHelper : NSObject {

	UIView* _view;
	objc_super _view_super;
	double _preferredMaxLayoutWidth;
	struct {
		unsigned isContainerView : 1;
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
	}  _flags;

}
-(id)initWithView:(id)arg1 class:(Class)arg2 ;
-(void)updateConstraints;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(double)preferredMaxLayoutWidth;
@end

