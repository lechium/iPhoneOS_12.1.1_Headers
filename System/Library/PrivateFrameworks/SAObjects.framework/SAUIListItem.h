/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIListItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelValue; 
@property (nonatomic,retain) id<SAAceSerializable> object; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * selectionText; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * title; 
+(id)listItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)listItem;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)labelValue;
-(void)setLabelValue:(NSString *)arg1 ;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)selectionText;
-(void)setSelectionText:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
-(NSString *)imageType;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<SAAceSerializable>)object;
-(NSString *)label;
-(void)setImageType:(NSString *)arg1 ;
-(void)setObject:(id<SAAceSerializable>)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
@end

