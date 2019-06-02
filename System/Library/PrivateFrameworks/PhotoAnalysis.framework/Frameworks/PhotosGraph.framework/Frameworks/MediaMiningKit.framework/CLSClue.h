/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, CLSInformant, CLSProfile;

@interface CLSClue : NSObject {

	BOOL _transient;
	NSString* _key;
	id _value;
	double _confidence;
	double _relevance;
	NSDictionary* _extraParameters;
	CLSInformant* _informant;
	CLSProfile* _profile;
	NSString* _informantIdentifier;
	NSString* _profileIdentifier;
	unsigned long long _versionCount;

}

@property (copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (retain) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign) double relevance;                             //@synthesize relevance=_relevance - In the implementation block
@property (retain) CLSInformant * informant;                     //@synthesize informant=_informant - In the implementation block
@property (retain) CLSProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * informantIdentifier;               //@synthesize informantIdentifier=_informantIdentifier - In the implementation block
@property (retain) NSString * profileIdentifier;                 //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign) BOOL transient;                               //@synthesize transient=_transient - In the implementation block
@property (assign) unsigned long long versionCount;              //@synthesize versionCount=_versionCount - In the implementation block
@property (retain) NSDictionary * extraParameters;               //@synthesize extraParameters=_extraParameters - In the implementation block
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(unsigned long long)enumValue;
-(unsigned long long)valueHash;
-(void)setTransient:(BOOL)arg1 ;
-(BOOL)transient;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(double)score;
-(void)setInformant:(CLSInformant *)arg1 ;
-(void)setRelevance:(double)arg1 ;
-(CLSInformant *)informant;
-(NSString *)informantIdentifier;
-(unsigned long long)versionCount;
-(long long)compareScore:(id)arg1 ;
-(void)_incrementVersionCount;
-(void)setInformantIdentifier:(NSString *)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)setVersionCount:(unsigned long long)arg1 ;
-(CLSProfile *)profile;
-(void)setProfile:(CLSProfile *)arg1 ;
-(NSString *)profileIdentifier;
-(double)relevance;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)integerValue;
-(unsigned long long)hash;
-(id)description;
-(id)stringValue;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)doubleValue;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
@end

