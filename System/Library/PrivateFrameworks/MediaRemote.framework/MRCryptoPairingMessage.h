/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic,readonly) NSData * pairingData; 
@property (nonatomic,readonly) int status; 
@property (getter=isRetrying,nonatomic,readonly) BOOL retrying; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(unsigned long long)encryptionType;
-(BOOL)isUsingSystemPairing;
-(NSData *)pairingData;
-(BOOL)isRetrying;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned long long)arg5 ;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 ;
-(unsigned long long)state;
-(unsigned long long)type;
-(int)status;
@end
