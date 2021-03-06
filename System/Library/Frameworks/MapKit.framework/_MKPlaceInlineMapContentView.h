/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, NSLayoutConstraint, UIImageView, _MKUILabel, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	UIImageView* _mapView;
	_MKUILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * map; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(UIImage *)map;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(double)mapViewHeight;
-(double)titleHeight;
-(void)setMap:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)hasTitle;
@end

