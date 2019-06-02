/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class HKLegendEntry, UILabel, _HKLegendDot, UIImageView;

@interface _HKLegendEntryView : UIStackView {

	HKLegendEntry* _currentLegendEntry;
	UILabel* _legendLabel;
	_HKLegendDot* _legendDot;
	UIImageView* _legendIcon;
	HKLegendEntry* _legendEntry;

}

@property (nonatomic,retain) HKLegendEntry * legendEntry;              //@synthesize legendEntry=_legendEntry - In the implementation block
-(void)setLegendEntry:(HKLegendEntry *)arg1 ;
-(id)initWithLegendEntry:(id)arg1 ;
-(HKLegendEntry *)legendEntry;
@end
