/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconProgressViewDelegate.h>

@class UIImageView, UIView, SBIconProgressView, UIImage, NSString;

@interface _WLKUIAppInstallView : UIView <SBIconProgressViewDelegate> {

	UIImageView* _appIconImageView;
	UIView* _backgroundKnockoutView;
	/*^block*/id _completion;
	SBIconProgressView* _progressView;
	UIImage* _appIcon;
	double _installProgress;

}

@property (nonatomic,retain) UIImage * appIcon;                     //@synthesize appIcon=_appIcon - In the implementation block
@property (assign,nonatomic) double installProgress;                //@synthesize installProgress=_installProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_progressMaskImage;
+(CGSize)_appIconSize;
+(double)_appIconRadius;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(double)installProgress;
-(void)setInstallProgress:(double)arg1 ;
-(void)finishInstallationWithCompletion:(/*^block*/id)arg1 ;
-(void)setWaiting;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end

