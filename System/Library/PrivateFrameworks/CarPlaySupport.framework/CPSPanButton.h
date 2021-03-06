/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CALayer, NSString;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate> {

	long long _direction;
	CALayer* _backgroundLayer;

}

@property (nonatomic,retain) CALayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,readonly) long long direction;                  //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_focusedBackgroundColor;
+(id)_backgroundColor;
-(id)initWithDirection:(long long)arg1 ;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(long long)direction;
@end

