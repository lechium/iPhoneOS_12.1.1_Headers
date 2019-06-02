/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {

	long long _bitBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyVectorWithKeys:(id)arg1 ;
+(id)keyVector;
+(id)keyVectorWithKey:(id)arg1 ;
+(CFDictionaryRef)propertyKeysToIndicesByPointer;
+(CFDictionaryRef)propertyKeysToIndicesByValue;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(unsigned long long)indexOfKey:(id)arg1 ;
+(id)keyVectorWithAllKeys;
+(BOOL)supportsSecureCoding;
-(BOOL)containsKey:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(BOOL)intersectsKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKey:(id)arg1 ;
-(BOOL)isEqualToKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(id)initWithAllKeys;
-(void)_checkStorageSize;
-(long long*)_bitBuckets;
-(id)keyVectorByAddingKeys:(id)arg1 ;
-(BOOL)containsAllKeys;
-(BOOL)isSubsetOfKeyVector:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
@end

