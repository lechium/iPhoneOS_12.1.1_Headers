/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MDLTransformComponent <MDLComponent>
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@optional
+(/*function pointer*/void**)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
-(/*function pointer*/void**)localTransformAtTime:(double)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1 forTime:(double)arg2;
-(void)setLocalTransform:(/*function pointer*/void*)arg1;

@required
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1;
-(SCD_Struct_MD1)matrix;
-(void)setMatrix:(/*function pointer*/void*)arg1;
-(double)maximumTime;
-(double)minimumTime;
-(NSArray *)keyTimes;

@end

