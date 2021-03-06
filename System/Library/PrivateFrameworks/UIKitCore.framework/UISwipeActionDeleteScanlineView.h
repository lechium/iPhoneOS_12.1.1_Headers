/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface UISwipeActionDeleteScanlineView : UIView {

	UIView* _bottomLineWrapper;
	UIView* _topLine;
	UIView* _bottomLine;

}

@property (nonatomic,copy) UIColor * deleteLineColor; 
+(double)lineHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDeleteLineColor:(UIColor *)arg1 ;
-(UIColor *)deleteLineColor;
@end

