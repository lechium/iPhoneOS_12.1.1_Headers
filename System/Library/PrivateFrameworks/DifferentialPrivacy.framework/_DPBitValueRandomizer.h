/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@class _DPBiasedCoin;

@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer> {

	unsigned long long _p;
	double _epsilon;
	_DPBiasedCoin* _epsilonCoin;

}

@property (p,nonatomic,readonly) unsigned long long p;                   //@synthesize p=_p - In the implementation block
@property (nonatomic,readonly) double epsilon;                           //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * epsilonCoin;              //@synthesize epsilonCoin=_epsilonCoin - In the implementation block
+(id)bitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(_DPBiasedCoin *)epsilonCoin;
-(id)randomize:(id)arg1 ;
-(unsigned long long)p;
-(id)init;
-(id)description;
-(double)epsilon;
@end

