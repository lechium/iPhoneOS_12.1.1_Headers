/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SVButton : UIButton {

	/*^block*/id _touchUpInsideBlock;
	UIEdgeInsets _touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets;                                 //@synthesize touchInsets=_touchInsets - In the implementation block
@property (setter=onTouchUpInside:,nonatomic,copy) id touchUpInsideBlock;              //@synthesize touchUpInsideBlock=_touchUpInsideBlock - In the implementation block
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)_privateButtonTapped;
-(id)touchUpInsideBlock;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
@end
