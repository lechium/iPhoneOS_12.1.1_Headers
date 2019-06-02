/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDBezierNode : NSObject {

	CGPoint mIn;
	CGPoint mNode;
	CGPoint mOut;
	int mReflectedState;
	BOOL mSelected;
	int mType;

}

@property (assign,nonatomic) CGPoint nodePoint; 
@property (assign,nonatomic) CGPoint inControlPoint; 
@property (assign,nonatomic) CGPoint outControlPoint; 
@property (assign,nonatomic) int reflectedState; 
@property (nonatomic,readonly) BOOL isCollapsed; 
@property (assign,nonatomic) int type; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)bezierNodeWithPoint:(CGPoint)arg1 ;
+(id)bezierNodeWithPoint:(CGPoint)arg1 inControlPoint:(CGPoint)arg2 outControlPoint:(CGPoint)arg3 ;
-(id)typeString;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)setNodePoint:(CGPoint)arg1 ;
-(void)setInControlPoint:(CGPoint)arg1 ;
-(void)setOutControlPoint:(CGPoint)arg1 ;
-(void)setReflectedState:(int)arg1 ;
-(CGPoint)nodePoint;
-(CGPoint)inControlPoint;
-(CGPoint)outControlPoint;
-(int)reflectedState;
-(id)reflectedStateString;
-(void)balanceControlPoints;
-(void)setInControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setOutControlPoint:(CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3 ;
-(void)setInControlPointFromReflection:(CGPoint)arg1 constrain:(BOOL)arg2 ;
-(void)collapse;
-(void)updateReflectedState;
-(void)swapControlPoints;
-(BOOL)underPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCollapsed;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)setNode:(CGPoint)arg1 ;
@end

