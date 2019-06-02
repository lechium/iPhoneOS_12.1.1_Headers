/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REForcedRelevanceProvider : RERelevanceProvider {

	BOOL _isHistoric;
	float _relevance;

}

@property (nonatomic,readonly) float relevance;              //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,readonly) BOOL isHistoric;              //@synthesize isHistoric=_isHistoric - In the implementation block
+(id)relevanceSimulatorID;
-(float)relevance;
-(id)dictionaryEncoding;
-(id)initWithForcedRelevance:(float)arg1 isHistoric:(BOOL)arg2 ;
-(id)initWithForcedRelevance:(float)arg1 ;
-(BOOL)isHistoric;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
@end
