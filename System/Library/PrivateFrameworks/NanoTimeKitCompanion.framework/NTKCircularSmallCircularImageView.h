/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView {

	UIView*<NTKComplicationImageView> _imageView;

}

@property (nonatomic,retain) UIView*<NTKComplicationImageView> imageView;              //@synthesize imageView=_imageView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(void)load;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)_updateForTemplateChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView*<NTKComplicationImageView>)imageView;
-(void)setImageView:(UIView*<NTKComplicationImageView>)arg1 ;
@end

