/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * definitionEntries; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * partOfSpeech; 
@property (nonatomic,copy) NSArray * synonyms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionGroup;
+(id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSynonyms:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)definitionEntries;
-(void)setDefinitionEntries:(NSArray *)arg1 ;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)synonyms;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
@end

