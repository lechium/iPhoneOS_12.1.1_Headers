/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictions.framework/SearchToSharePredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGQPPrediction : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _query;
	long long _type;
	double _score;
	unsigned long long _phraseId;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned long long phraseId;              //@synthesize phraseId=_phraseId - In the implementation block
@property (nonatomic,readonly) BOOL isPhrasePrediction; 
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * query;                         //@synthesize query=_query - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 prediction:(id)arg3 score:(double)arg4 phraseId:(unsigned long long)arg5 ;
-(BOOL)isPhrasePrediction;
-(id)searchSuggestion;
-(double)score;
-(id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3 phraseId:(unsigned long long)arg4 ;
-(id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3 ;
-(unsigned long long)phraseId;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSString *)query;
@end

