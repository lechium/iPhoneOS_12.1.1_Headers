/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSString * value; 
+(id)keyValueStringEntry;
+(id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
@end

