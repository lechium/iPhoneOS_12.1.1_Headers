/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UILabel, NSString;

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell> {

	BOOL _showOfferTimeRemaining;
	double _offerTimeRemaining;
	UILabel* _timeRemainingLabel;

}

@property (nonatomic,retain) UILabel * timeRemainingLabel;              //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (assign,nonatomic) BOOL showOfferTimeRemaining;               //@synthesize showOfferTimeRemaining=_showOfferTimeRemaining - In the implementation block
@property (assign,nonatomic) double offerTimeRemaining;                 //@synthesize offerTimeRemaining=_offerTimeRemaining - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
+(double)preferredHeight;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(UILabel *)timeRemainingLabel;
-(BOOL)showOfferTimeRemaining;
-(void)setShowOfferTimeRemaining:(BOOL)arg1 ;
-(id)timeStringForTimeInterval:(double)arg1 ;
-(void)setOfferTimeRemaining:(double)arg1 ;
-(double)offerTimeRemaining;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

