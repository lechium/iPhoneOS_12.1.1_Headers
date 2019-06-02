/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPNamedEntity, PPSource, NSString;

@interface PPNamedEntityRecord : _PASZonedObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	PPNamedEntity* _entity;
	PPSource* _source;
	NSString* _extractionOsBuild;
	float _initialScore;
	float _decayRate;
	unsigned short _extractionAssetVersion;
	unsigned char _algorithm;
	unsigned char _changeType;

}

@property (nonatomic,readonly) PPNamedEntity * entity;                                 //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) PPSource * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion; 
@property (nonatomic,readonly) unsigned char changeType;                               //@synthesize changeType=_changeType - In the implementation block
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(PPNamedEntity *)entity;
-(unsigned char)changeType;
-(unsigned long long)algorithm;
-(unsigned long long)extractionAssetVersion;
-(BOOL)isEqualToNamedEntityRecord:(id)arg1 ;
-(NSString *)extractionOsBuild;
-(double)decayRate;
-(double)initialScore;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(PPSource *)source;
@end
