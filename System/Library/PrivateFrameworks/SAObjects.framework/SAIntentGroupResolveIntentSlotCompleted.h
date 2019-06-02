/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentSlotResolutionResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)resolveIntentSlotCompleted;
+(id)resolveIntentSlotCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)intentSlotResolutionResult;
-(void)setIntentSlotResolutionResult:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)groupIdentifier;
@end

