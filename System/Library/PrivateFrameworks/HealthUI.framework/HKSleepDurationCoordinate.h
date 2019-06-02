/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray, NSNumber;

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate {

	BOOL _highlighted;
	NSArray* _stackPoints;
	NSNumber* _goalLineYValue;

}

@property (nonatomic,copy) NSArray * stackPoints;                  //@synthesize stackPoints=_stackPoints - In the implementation block
@property (nonatomic,copy) NSNumber * goalLineYValue;              //@synthesize goalLineYValue=_goalLineYValue - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;                   //@synthesize highlighted=_highlighted - In the implementation block
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(NSArray *)stackPoints;
-(id)initWithStackPoints:(id)arg1 goalLineYValue:(id)arg2 highlighted:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)setStackPoints:(NSArray *)arg1 ;
-(NSNumber *)goalLineYValue;
-(void)setGoalLineYValue:(NSNumber *)arg1 ;
-(BOOL)highlighted;
@end
