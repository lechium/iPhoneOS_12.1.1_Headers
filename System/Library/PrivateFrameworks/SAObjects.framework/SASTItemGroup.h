/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet

@property (nonatomic,copy) NSArray * fallbackCommands; 
@property (nonatomic,copy) NSArray * templateItems; 
+(id)itemGroupWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)itemGroup;
-(id)encodedClassName;
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end
