/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSDate, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {

	BOOL _useCompactDateFormat;
	NSDate* _date;
	SBFLockScreenAlternateDateLabel* _alternateDateLabel;
	double _alignmentPercent;

}

@property (nonatomic,retain) SBFLockScreenAlternateDateLabel * alternateDateLabel;              //@synthesize alternateDateLabel=_alternateDateLabel - In the implementation block
@property (assign,nonatomic) double alignmentPercent;                                           //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL useCompactDateFormat;                                         //@synthesize useCompactDateFormat=_useCompactDateFormat - In the implementation block
+(id)dateTimeLunarDateFont;
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB1)dateTimeLunarDateFontMetrics;
+(double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
-(id)initWithDate:(id)arg1 ;
-(void)_setupAlternateDateLabel;
-(void)_overlayCalendarDidChange;
-(void)_updateDateLabelForCompact;
-(CGRect)alternateDateLabelFrame;
-(double)_lunarDateLabelYOffsetFromDateLabel;
-(CGRect)subtitleLabelFrame;
-(void)setAlignmentPercent:(double)arg1 ;
-(void)setUseCompactDateFormat:(BOOL)arg1 ;
-(SBFLockScreenAlternateDateLabel *)alternateDateLabel;
-(void)setAlternateDateLabel:(SBFLockScreenAlternateDateLabel *)arg1 ;
-(double)alignmentPercent;
-(BOOL)useCompactDateFormat;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSDate *)date;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setStrength:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

