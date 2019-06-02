/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCGlobalMetadatum.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableGlobalMetadatum : BCMutableCloudData <BCGlobalMetadatum> {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,copy) NSString * value;                                                     //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (nonatomic,copy,readonly) NSString * key;                                              //@synthesize key=_key - In the implementation block
-(id)initWithRecord:(id)arg1 ;
-(id)recordType;
-(id)initWithKey:(id)arg1 ;
-(id)zoneName;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(NSString *)description;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
@end

