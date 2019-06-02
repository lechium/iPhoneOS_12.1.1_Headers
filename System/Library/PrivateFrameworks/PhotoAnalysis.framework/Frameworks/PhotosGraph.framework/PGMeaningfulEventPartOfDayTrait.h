/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {

	unsigned long long _value;
	unsigned long long _forbiddenValue;

}

@property (nonatomic,readonly) unsigned long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenValue;              //@synthesize forbiddenValue=_forbiddenValue - In the implementation block
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2 ;
-(unsigned long long)forbiddenValue;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(BOOL)isActive;
-(unsigned long long)value;
@end

