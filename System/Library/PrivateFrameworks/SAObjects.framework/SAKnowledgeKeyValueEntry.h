/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyValueEntry;
+(id)keyValueEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)storeName;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setStoreType:(NSString *)arg1 ;
-(NSString *)storeType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end
