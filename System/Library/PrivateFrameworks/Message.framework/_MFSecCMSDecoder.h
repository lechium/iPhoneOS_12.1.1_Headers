/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFCollectingDataConsumer.h>

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {

	int _SecCMSError;
	SecCmsMessageStrRef _message;
	SecCmsDigestContextStrRef _digest;
	NSArray* _signers;
	SecCmsSignedDataStrRef _signedData;
	SecCmsEnvelopedDataStrRef _envelopedData;
	BOOL _isEncrypted;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
@property (nonatomic,readonly) NSArray * signers;                                  //@synthesize signers=_signers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPartData:(id)arg1 error:(id*)arg2 ;
-(int)lastSecCMSError;
-(id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2 ;
-(BOOL)isContentEncrypted;
-(BOOL)isContentSigned;
-(id)signedData;
-(NSArray *)signers;
-(void)dealloc;
-(void)done;
-(id)data;
-(long long)appendData:(id)arg1 ;
@end

