/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SASProximitySessionTransport : NSObject {

	/*^block*/id _receivedDataBlock;

}

@property (copy) id receivedDataBlock;              //@synthesize receivedDataBlock=_receivedDataBlock - In the implementation block
-(void)setReceivedDataBlock:(id)arg1 ;
-(void)sendData:(id)arg1 response:(/*^block*/id)arg2 ;
-(id)receivedDataBlock;
-(void)invalidate;
-(void)activate;
@end

