/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView {

	double _date;
	BOOL _indentsForDots;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
-(double)date;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDate:(double)arg1 ;
@end

