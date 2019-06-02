/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface CMKAvalancheIndicatorView : UIView {

	BOOL _showsWhenStarted;
	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (nonatomic,readonly) UIView * _backgroundView;               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                  //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;              //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
@property (assign,nonatomic) BOOL showsWhenStarted;                    //@synthesize showsWhenStarted=_showsWhenStarted - In the implementation block
-(void)_commonCMKAvalancheIndicatorViewInitialization;
-(BOOL)showsWhenStarted;
-(void)setShowsWhenStarted:(BOOL)arg1 ;
-(void)_performCaptureAnimation;
-(void)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateCountLabelWithNumberOfPhotos;
-(UILabel *)_countLabel;
-(long long)_numberOfPhotos;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(CGSize)intrinsicContentSize;
-(void)reset;
@end

