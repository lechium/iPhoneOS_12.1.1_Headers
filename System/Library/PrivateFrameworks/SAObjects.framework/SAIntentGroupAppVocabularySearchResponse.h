/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAIntentGroupAppVocabularySearchResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSArray * vocabularyStrings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)appVocabularySearchResponse;
+(id)appVocabularySearchResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)vocabularyStrings;
-(void)setVocabularyStrings:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

