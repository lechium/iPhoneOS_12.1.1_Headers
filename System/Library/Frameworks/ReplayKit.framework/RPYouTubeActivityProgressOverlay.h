/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface RPYouTubeActivityProgressOverlay : UIView {

	BOOL _isShowing;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                           //@synthesize isShowing=_isShowing - In the implementation block
-(void)setIsShowing:(BOOL)arg1 ;
-(void)stopActivity;
-(void)setShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setupOverlayAnimated:(BOOL)arg1 ;
-(void)tearDownOverlayAnimated:(BOOL)arg1 ;
-(BOOL)isShowing;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

