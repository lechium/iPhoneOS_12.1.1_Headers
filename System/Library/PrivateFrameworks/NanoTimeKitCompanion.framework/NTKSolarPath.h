/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NTKSolarTimeModel;

@interface NTKSolarPath : NSObject {

	UIBezierPath* _bezierPath;
	CGRect _bounds;
	NTKSolarTimeModel* _solarTimeModel;
	BOOL _verticallyFitsPathToBounds;
	BOOL _usePlaceholderData;
	CGPoint _points[29];
	double _altitude[29];

}

@property (nonatomic,readonly) UIBezierPath * bezierPath;                       //@synthesize bezierPath=_bezierPath - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                   //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) NTKSolarTimeModel * solarTimeModel;              //@synthesize solarTimeModel=_solarTimeModel - In the implementation block
@property (nonatomic,readonly) BOOL verticallyFitsPathToBounds;                 //@synthesize verticallyFitsPathToBounds=_verticallyFitsPathToBounds - In the implementation block
-(NTKSolarTimeModel *)solarTimeModel;
-(id)initWithBounds:(CGRect)arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(BOOL)arg3 usePlaceholderData:(BOOL)arg4 ;
-(double)altitudeAtPercentage:(double)arg1 ;
-(id)_computeSolarPath;
-(double)altitudeAtX:(double)arg1 ;
-(BOOL)verticallyFitsPathToBounds;
-(CGRect)bounds;
-(UIBezierPath *)bezierPath;
@end

