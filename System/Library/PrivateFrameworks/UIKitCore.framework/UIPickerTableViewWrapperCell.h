/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(UIView *)wrappedView;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(id)_anyDateLabel;
@end

