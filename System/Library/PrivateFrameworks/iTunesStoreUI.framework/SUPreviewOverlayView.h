/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SUPreviewOverlayView : UIView {

	UIView* _borderView;
	UIView* _storePageView;

}

@property (nonatomic,retain) UIView * storePageView;              //@synthesize storePageView=_storePageView - In the implementation block
-(void)setStorePageView:(UIView *)arg1 ;
-(UIView *)storePageView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
