/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSSet;

@interface FCJSONRecordSourceSchema : NSObject <NSCopying> {

	NSString* _recordType;
	NSString* _recordIDPrefix;
	NSArray* _keys;
	NSArray* _localizableKeys;
	NSArray* _allKeys;
	NSSet* _localizableKeysSet;

}

@property (nonatomic,copy) NSSet * localizableKeysSet;                      //@synthesize localizableKeysSet=_localizableKeysSet - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordIDPrefix;              //@synthesize recordIDPrefix=_recordIDPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keys;                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizableKeys;              //@synthesize localizableKeys=_localizableKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allKeys;                      //@synthesize allKeys=_allKeys - In the implementation block
-(NSArray *)localizableKeys;
-(NSString *)recordIDPrefix;
-(BOOL)isLocalizableKey:(id)arg1 ;
-(NSSet *)localizableKeysSet;
-(id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 ;
-(void)setLocalizableKeysSet:(NSSet *)arg1 ;
-(NSString *)recordType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allKeys;
-(NSArray *)keys;
@end

