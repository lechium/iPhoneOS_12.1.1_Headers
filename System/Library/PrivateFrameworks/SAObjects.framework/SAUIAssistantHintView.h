/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSArray;

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * regions; 
+(id)assistantHintView;
+(id)assistantHintViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRegions:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)regions;
@end
