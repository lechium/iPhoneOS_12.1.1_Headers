/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(id)fullAccountIdentityWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicAccountIdentityWithError:(id*)arg1 ;
-(NSData *)publicName;
-(id)rolledAccountIdenityWithError:(id*)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
@end

