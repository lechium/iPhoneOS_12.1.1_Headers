/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSDMixing.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {

	TSDPathSource* mPathSource;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(TSDPathSource *)pathSource;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGeometry:(id)arg1 ;
@end

