/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSArray;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL allowsPunchOut; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (assign,nonatomic) BOOL shouldRunHandleIntent; 
+(id)processIntent;
+(id)processIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
-(BOOL)allowsPunchOut;
-(void)setAllowsPunchOut:(BOOL)arg1 ;
-(BOOL)shouldRunHandleIntent;
-(void)setShouldRunHandleIntent:(BOOL)arg1 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end

