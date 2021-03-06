/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDiffable;
@class NSMutableDictionary, NSArray;

@interface MTObjectDiff : NSObject {

	id<MTDiffable> _diffable1;
	id<MTDiffable> _diffable2;
	unsigned long long _results;
	NSMutableDictionary* _differencesByKey;

}

@property (nonatomic,copy) id<MTDiffable> diffable1;                              //@synthesize diffable1=_diffable1 - In the implementation block
@property (nonatomic,copy) id<MTDiffable> diffable2;                              //@synthesize diffable2=_diffable2 - In the implementation block
@property (assign,nonatomic) unsigned long long results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * differencesByKey;              //@synthesize differencesByKey=_differencesByKey - In the implementation block
@property (nonatomic,readonly) NSArray * differences; 
+(id)diffBetweenObject:(id)arg1 andObject:(id)arg2 ;
-(void)computeDiff;
-(BOOL)hasDifferencesInKeys:(id)arg1 ;
-(id)initWithObject:(id)arg1 andObject:(id)arg2 ;
-(void)setDifferencesByKey:(NSMutableDictionary *)arg1 ;
-(void)_handleDifferenceForKey:(id)arg1 value1:(id)arg2 value2:(id)arg3 ;
-(NSArray *)differences;
-(id)differenceForKey:(id)arg1 ;
-(id<MTDiffable>)diffable1;
-(void)setDiffable1:(id<MTDiffable>)arg1 ;
-(id<MTDiffable>)diffable2;
-(void)setDiffable2:(id<MTDiffable>)arg1 ;
-(NSMutableDictionary *)differencesByKey;
-(id)description;
-(unsigned long long)results;
-(void)setResults:(unsigned long long)arg1 ;
@end

