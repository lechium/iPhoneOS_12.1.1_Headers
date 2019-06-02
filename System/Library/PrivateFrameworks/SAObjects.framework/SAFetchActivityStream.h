/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate, NSNumber, NSArray, NSDictionary;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * activityType; 
@property (assign,nonatomic) BOOL ascending; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSNumber * limit; 
@property (nonatomic,copy) NSArray * matchingMetadataKeys; 
@property (nonatomic,copy) NSDictionary * matchingMetadataKeysAndStringValues; 
@property (nonatomic,copy) NSString * sortBy; 
@property (nonatomic,copy) NSArray * streamTypes; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchActivityStream;
+(id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAscending:(BOOL)arg1 ;
-(NSString *)taskType;
-(void)setTaskType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)fromDate;
-(NSArray *)matchingMetadataKeys;
-(void)setMatchingMetadataKeys:(NSArray *)arg1 ;
-(NSDictionary *)matchingMetadataKeysAndStringValues;
-(void)setMatchingMetadataKeysAndStringValues:(NSDictionary *)arg1 ;
-(void)setSortBy:(NSString *)arg1 ;
-(NSArray *)streamTypes;
-(void)setStreamTypes:(NSArray *)arg1 ;
-(NSDate *)toDate;
-(NSNumber *)limit;
-(void)setLimit:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(BOOL)ascending;
-(NSString *)sortBy;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(NSString *)activityType;
-(NSString *)visibility;
-(void)setVisibility:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
@end
