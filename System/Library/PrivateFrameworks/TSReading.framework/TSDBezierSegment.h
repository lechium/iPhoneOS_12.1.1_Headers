/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDBezierSegment : NSObject {

	CGPoint mA;
	CGPoint mOut;
	CGPoint mIn;
	CGPoint mB;

}

@property (nonatomic,readonly) CGPoint fromPoint; 
@property (nonatomic,readonly) CGPoint outPoint; 
@property (nonatomic,readonly) CGPoint inPoint; 
@property (nonatomic,readonly) CGPoint toPoint; 
@property (nonatomic,readonly) BOOL bogusSegment; 
+(id)segmentFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(id)initFromPoint:(CGPoint)arg1 outPoint:(CGPoint)arg2 inPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(double)parametricValueForPoint:(CGPoint)arg1 ;
-(CGPoint)pointAtParametricValue:(double)arg1 ;
-(BOOL)bogusSegment;
-(CGPoint)fromPoint;
-(CGPoint)toPoint;
-(CGPoint)inPoint;
-(CGPoint)outPoint;
-(void)splitAtParametricValue:(double)arg1 left:(id*)arg2 right:(id*)arg3 ;
-(CGPoint)closestPointToPoint:(CGPoint)arg1 ;
-(id)description;
@end

