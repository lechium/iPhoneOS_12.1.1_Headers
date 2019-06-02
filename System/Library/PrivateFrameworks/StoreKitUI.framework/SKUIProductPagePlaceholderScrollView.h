/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface SKUIProductPagePlaceholderScrollView : UIScrollView {

	UIView* _placeholderView;
	double _offset;
	BOOL _isPad;

}

@property (assign,nonatomic) BOOL isPad;                            //@synthesize isPad=_isPad - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;              //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) double offset;                         //@synthesize offset=_offset - In the implementation block
-(BOOL)isPad;
-(void)setIsPad:(BOOL)arg1 ;
-(UIView *)placeholderView;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(double)offset;
-(void)setOffset:(double)arg1 ;
@end
