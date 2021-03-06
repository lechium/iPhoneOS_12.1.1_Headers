/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {

	int _SecCMSError;
	SecCmsEncoderStrRef _encoder;
	SecCmsMessageStrRef _message;
	NSMutableData* _singleShot;

}

@property (setter=ecCMSError,nonatomic,readonly) int lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
-(int)lastSecCMSError;
-(id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3 ;
-(id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2 ;
-(void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)done;
-(id)data;
-(long long)appendData:(id)arg1 ;
@end

