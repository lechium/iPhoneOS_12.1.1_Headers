/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface HUQuickControlSliderValueOverlayView : UIView {

	BOOL _off;
	BOOL _hasSecondGrabber;
	BOOL _showGrabbers;
	unsigned long long _primaryGrabberLocation;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (assign,getter=isOff,nonatomic) BOOL off;                                  //@synthesize off=_off - In the implementation block
@property (assign,nonatomic) BOOL hasSecondGrabber;                                  //@synthesize hasSecondGrabber=_hasSecondGrabber - In the implementation block
@property (assign,nonatomic) BOOL showGrabbers;                                      //@synthesize showGrabbers=_showGrabbers - In the implementation block
@property (assign,nonatomic) unsigned long long primaryGrabberLocation;              //@synthesize primaryGrabberLocation=_primaryGrabberLocation - In the implementation block
+(Class)layerClass;
-(void)setHasSecondGrabber:(BOOL)arg1 ;
-(void)setPrimaryGrabberLocation:(unsigned long long)arg1 ;
-(void)setOff:(BOOL)arg1 ;
-(void)_updateShape;
-(void)_updateBlendMode;
-(BOOL)showGrabbers;
-(unsigned long long)primaryGrabberLocation;
-(BOOL)hasSecondGrabber;
-(BOOL)isOff;
-(void)setShowGrabbers:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
@end

