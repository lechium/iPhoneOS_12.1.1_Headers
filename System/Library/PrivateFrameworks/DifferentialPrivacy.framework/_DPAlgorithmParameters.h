/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject {

	NSString* _serverAlgorithmString;
	NSDictionary* _parameterDictionary;

}

@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;              //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                 //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
+(id)parametersFromFile:(id)arg1 ;
+(id)algorithmParametersFromDictionary:(id)arg1 ;
+(id)algorithmParametersForKey:(id)arg1 ;
+(id)allAlgorithmNames;
-(NSDictionary *)parameterDictionary;
-(NSString *)serverAlgorithmString;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

