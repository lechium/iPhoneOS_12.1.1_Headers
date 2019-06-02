/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SiriUIMapDetailsContainerView : UIView {

	BOOL _autoCenteringDisabled;
	UIView* _detailsView;
	UIView* _mapView;
	double _centerMargin;
	UIEdgeInsets _backgroundInsets;

}

@property (nonatomic,retain) UIView * detailsView;                       //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UIView * mapView;                           //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) BOOL autoCenteringDisabled;                 //@synthesize autoCenteringDisabled=_autoCenteringDisabled - In the implementation block
@property (assign,nonatomic) double centerMargin;                        //@synthesize centerMargin=_centerMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;              //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(BOOL)autoCenteringDisabled;
-(void)setDetailsView:(UIView *)arg1 ;
-(void)setCenterMargin:(double)arg1 ;
-(UIView *)detailsView;
-(void)setAutoCenteringDisabled:(BOOL)arg1 ;
-(double)centerMargin;
-(UIEdgeInsets)backgroundInsets;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

