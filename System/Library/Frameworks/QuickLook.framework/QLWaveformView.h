/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImage, UIImageView, AVAsset;

@interface QLWaveformView : UIView {

	CGSize _waveSize;
	UIView* _lineView;
	UIImage* _waveImage;
	UIImageView* _waveView;
	AVAsset* _asset;
	UIImage* _placeholderImage;
	CGRect* _visibleRect;

}

@property (nonatomic,retain) AVAsset * asset;               //@synthesize asset=_asset - In the implementation block
@property (retain) UIImage * placeholderImage;              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign) CGRect* visibleRect;                     //@synthesize visibleRect=_visibleRect - In the implementation block
-(void)_updateWithWaveformImage:(id)arg1 ;
-(void)_expandWaveform;
-(void)layoutSubviews;
-(void)updateImage;
-(CGRect*)visibleRect;
-(void)setVisibleRect:(CGRect*)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
@end
