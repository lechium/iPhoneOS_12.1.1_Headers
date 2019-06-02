/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject {

	HAPRelayRequestMessage* _request;
	unsigned long long _type;
	long long _statusCode;
	NSData* _body;

}

@property (nonatomic,readonly) HAPRelayRequestMessage * request;               //@synthesize request=_request - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSData * body;                                    //@synthesize body=_body - In the implementation block
-(BOOL)_deserializeResponseMessage:(id)arg1 ;
-(id)initWithRequest:(id)arg1 serializedMessage:(id)arg2 ;
-(BOOL)isEncrypted;
-(id)description;
-(id)debugDescription;
-(unsigned long long)type;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(HAPRelayRequestMessage *)request;
-(id)shortDescription;
-(long long)statusCode;
@end

