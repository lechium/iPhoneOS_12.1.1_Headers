/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayAllDayView, UIView, EKDayView;

@interface EKDayViewWithGutters : UIView {

	EKDayAllDayView* _leftAllDayView;
	EKDayAllDayView* _rightAllDayView;
	UIView* _leftGutter;
	UIView* _rightGutter;
	EKDayView* _dayView;
	double _gutterWidth;
	double _allDayHeight;

}

@property (nonatomic,readonly) UIView * leftGutter;               //@synthesize leftGutter=_leftGutter - In the implementation block
@property (nonatomic,readonly) UIView * rightGutter;              //@synthesize rightGutter=_rightGutter - In the implementation block
@property (nonatomic,retain) EKDayView * dayView;                 //@synthesize dayView=_dayView - In the implementation block
@property (assign,nonatomic) double gutterWidth;                  //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (assign,nonatomic) double allDayHeight;                 //@synthesize allDayHeight=_allDayHeight - In the implementation block
-(id)_createAllDayView;
-(void)setDayView:(EKDayView *)arg1 ;
-(UIView *)leftGutter;
-(EKDayView *)dayView;
-(UIView *)rightGutter;
-(void)setAllDayHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dayView:(id)arg2 ;
-(double)allDayHeight;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
@end

