/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class CPManeuver, CPTravelEstimates;

@interface CPSManeuverView : CPSInheritedBackgroundColorView {

	BOOL _minimalMode;
	CPManeuver* _representedManeuver;
	long long _style;
	CPTravelEstimates* _currentTravelEstimates;

}

@property (nonatomic,readonly) CPManeuver * representedManeuver;                      //@synthesize representedManeuver=_representedManeuver - In the implementation block
@property (assign,nonatomic) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;              //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (getter=isMinimalMode,nonatomic,readonly) BOOL minimalMode;                 //@synthesize minimalMode=_minimalMode - In the implementation block
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(CPTravelEstimates *)currentTravelEstimates;
-(id)initWithManeuver:(id)arg1 minimalMode:(BOOL)arg2 style:(long long)arg3 ;
-(BOOL)isMinimalMode;
-(CPManeuver *)representedManeuver;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end
