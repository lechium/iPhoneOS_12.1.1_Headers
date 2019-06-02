/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NULoadingViewProviding.h>

@class UIActivityIndicatorView, NSString;

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding> {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)loadingViewStartAnimating;
-(void)loadingViewStopAnimating;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
@end

