/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCGlobalMetadatum.h>
@class NSString;


@protocol BCGlobalMetadatum <BCCloudData>
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * value; 
@required
-(NSString *)value;
-(NSString *)key;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCGlobalMetadatum : BCCloudData <BCGlobalMetadatum>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * value; 
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
+(id)propertyIDKey;
-(id)recordType;
-(id)zoneName;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromMetadatum:(id)arg1 ;
-(id)mutableCopy;
-(id)identifier;
-(NSString *)debugDescription;
@end
