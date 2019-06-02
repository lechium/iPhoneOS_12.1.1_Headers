/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageSendConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {

	MFError* _error;
	long long _status;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;

}

@property (nonatomic,retain) MFError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesRead;                 //@synthesize bytesRead=_bytesRead - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(unsigned long long)bytesRead;
-(unsigned long long)bytesWritten;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3 ;
-(void)dealloc;
-(long long)status;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
@end

