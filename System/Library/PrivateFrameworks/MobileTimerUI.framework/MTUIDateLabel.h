/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimeZone, NSDate, UILabel, UIColor, UIFont, NSArray;

@interface MTUIDateLabel : UIView {

	NSTimeZone* _timeZone;
	BOOL _shouldAddLayoutConstraints;
	NSDate* _date;
	UILabel* _dateLabel;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _timeDesignatorFont;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;                 //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,copy) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                        //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * timeDesignatorFont;                  //@synthesize timeDesignatorFont=_timeDesignatorFont - In the implementation block
@property (assign,nonatomic) BOOL shouldAddLayoutConstraints;              //@synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints - In the implementation block
@property (assign,nonatomic) double lastBaselineFrameOriginY; 
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)setLastBaselineFrameOriginY:(double)arg1 ;
-(void)_updateDateString;
-(void)_noteLayoutChange;
-(double)lastBaselineFrameOriginY;
-(BOOL)shouldAddLayoutConstraints;
-(void)setShouldAddLayoutConstraints:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)updateConstraints;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(id)viewForLastBaselineLayout;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(UILabel *)dateLabel;
-(id)viewForFirstBaselineLayout;
-(id)viewForBaselineLayout;
-(UIFont *)timeDesignatorFont;
@end

