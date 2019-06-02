/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ATXMagicalMomentsSignals : NSObject {

	unsigned long long _predictionSource;
	long long _reason;
	NSDictionary* _reasonMetadata;
	double _confidence;
	unsigned long long _predictionIndex;

}

@property (nonatomic,readonly) unsigned long long predictionSource;              //@synthesize predictionSource=_predictionSource - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * reasonMetadata;                    //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionIndex;               //@synthesize predictionIndex=_predictionIndex - In the implementation block
-(id)initWithPredictionSource:(unsigned long long)arg1 reason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 index:(unsigned long long)arg5 ;
-(unsigned long long)predictionSource;
-(NSDictionary *)reasonMetadata;
-(unsigned long long)predictionIndex;
-(id)init;
-(long long)reason;
-(double)confidence;
@end

