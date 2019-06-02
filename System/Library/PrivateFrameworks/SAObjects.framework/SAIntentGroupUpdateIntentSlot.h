/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAIntentGroupSetMapLocation.h>

@class SAIntentGroupProtobufMessage, NSString, NSNumber;

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAServerBoundCommand, SAIntentGroupSetMapLocation>

@property (nonatomic,copy) NSString * intentSlotKeyPath; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentSlotResolutionResult; 
@property (nonatomic,copy) NSNumber * intentSlotValueIndex; 
@property (nonatomic,copy) NSString * intentTypeName; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateIntentSlot;
+(id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)intentSlotKeyPath;
-(void)setIntentSlotKeyPath:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentSlotResolutionResult;
-(void)setIntentSlotResolutionResult:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSNumber *)intentSlotValueIndex;
-(void)setIntentSlotValueIndex:(NSNumber *)arg1 ;
-(NSString *)intentTypeName;
-(void)setIntentTypeName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)location;
-(void)setLocation:(SAIntentGroupProtobufMessage *)arg1 ;
@end

