/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * endpointConfirmationTimestamp; 
+(id)confirmEndpoint;
+(id)confirmEndpointWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)endpointConfirmationTimestamp;
-(void)setEndpointConfirmationTimestamp:(NSNumber *)arg1 ;
-(id)groupIdentifier;
@end
