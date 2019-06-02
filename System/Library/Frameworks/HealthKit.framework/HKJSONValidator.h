/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSMutableDictionary;

@interface HKJSONValidator : NSObject {

	NSMutableDictionary* _subschemaCache;
	id<NSCopying> _schema;

}

@property (nonatomic,copy,readonly) id<NSCopying> schema;              //@synthesize schema=_schema - In the implementation block
+(id)searchPaths;
+(void)registerSearchPath:(id)arg1 ;
+(BOOL)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id*)arg4 ;
-(id)initWithSchema:(id)arg1 ;
-(BOOL)_validateJSONObject:(id)arg1 keyStack:(id)arg2 ;
-(id)_mismatchErrorFromKeyStack:(id)arg1 ;
-(BOOL)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(BOOL)arg4 ;
-(id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2 ;
-(BOOL)validateJSONObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validateBoolean:(id)arg1 ;
-(BOOL)_validateFingerprintSHA256:(id)arg1 ;
-(BOOL)_validateTimezone:(id)arg1 ;
-(BOOL)_validateURL:(id)arg1 ;
-(BOOL)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3 ;
-(id)_loadSubschemaNamed:(id)arg1 ;
-(id)initWithSchema:(id)arg1 subschemaCache:(id)arg2 ;
-(id<NSCopying>)schema;
-(id)init;
@end
