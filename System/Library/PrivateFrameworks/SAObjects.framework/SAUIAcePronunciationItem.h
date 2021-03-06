/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)tts;
-(void)setTts:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

