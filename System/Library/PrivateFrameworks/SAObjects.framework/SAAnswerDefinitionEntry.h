/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * definition; 
@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSArray * variations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionEntry;
+(id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setExamples:(NSArray *)arg1 ;
-(NSArray *)examples;
-(id)encodedClassName;
-(void)setDefinition:(NSString *)arg1 ;
-(void)setVariations:(NSArray *)arg1 ;
-(NSArray *)variations;
-(id)groupIdentifier;
-(NSString *)definition;
@end
