/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, MKButtonWithTargetArgument, NSString;

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorTableViewCell {

	unsigned long long _type;
	BOOL _extraSpacing;
	_MKUILabel* _label;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(id)_font:(unsigned long long)arg1 ;
+(id)_buttonFont:(unsigned long long)arg1 ;
+(double)defaultHeight;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(BOOL)arg2 ;
-(id)initWithType:(unsigned long long)arg1 extraSpacing:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)tintColorDidChange;
-(MKButtonWithTargetArgument *)button;
@end

