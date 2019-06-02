/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface ColorBarView : UIView {

	BOOL _dashedLines;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL dashedLines;              //@synthesize dashedLines=_dashedLines - In the implementation block
-(void)setDashedLines:(BOOL)arg1 ;
-(BOOL)dashedLines;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

