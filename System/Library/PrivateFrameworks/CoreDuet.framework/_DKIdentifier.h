/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	NSString* _stringValue;
	_DKIdentifierType* _identifierType;

}

@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) _DKIdentifierType * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fromPBCodable:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)entityName;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(_DKIdentifierType *)identifierType;
-(id)primaryValue;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(id)toPBCodable;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(long long)typeCode;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(id)objectType;
-(long long)compareValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)integerValue;
-(NSString *)description;
-(NSString *)stringValue;
-(double)doubleValue;
-(void)setStringValue:(NSString *)arg1 ;
@end

