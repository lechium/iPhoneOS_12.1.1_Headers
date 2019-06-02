/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSDMagicMoveTextureZOrderer : NSObject {

	NSArray* _zOrderMatches;
	NSArray* _outgoingTexturesInZOrder;
	NSArray* _incomingTexturesInZOrder;
	double* _percentTexturesTimes;
	NSArray* _percentTextures;
	unsigned long long _zOrderIntersectionsCount;

}

@property (nonatomic,readonly) unsigned long long zOrderIntersectionsCount;              //@synthesize zOrderIntersectionsCount=_zOrderIntersectionsCount - In the implementation block
-(void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1 ;
-(void)p_calculateTextureArraysFromIntersections;
-(void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(double)arg3 ;
-(unsigned long long)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2 ;
-(id)p_arrayBySortingMatches:(id)arg1 withInterpolatedPercent:(double)arg2 ;
-(id)initWithAnimationMatches:(id)arg1 ;
-(id)texturedRectanglesAtPercent:(double)arg1 ;
-(unsigned long long)p_zIntersectionsBetweenZOrdererMatches:(id)arg1 ;
-(unsigned long long)zOrderIntersectionsCount;
-(void)dealloc;
@end

