/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPOperationRequestPacket : NSObject {

	int _numParameters;
	unsigned _dataPhaseInfo;
	unsigned short _operationCode;
	unsigned _transactionID;
	unsigned _parameters[5];

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(unsigned short)operationCode;
-(id)contentForUSB;
-(unsigned)parameter1;
-(void)setParameter1:(unsigned)arg1 ;
-(unsigned)parameter2;
-(void)setParameter2:(unsigned)arg1 ;
-(unsigned)parameter3;
-(void)setParameter3:(unsigned)arg1 ;
-(void)setOperationCode:(unsigned short)arg1 ;
-(unsigned)parameter4;
-(unsigned)parameter5;
-(int)numParameters;
-(void)setPparameter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setParameter4:(unsigned)arg1 ;
-(void)setParameter5:(unsigned)arg1 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 numParameters:(unsigned)arg4 parameters:(unsigned*)arg5 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 parameter4:(unsigned)arg7 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 parameter4:(unsigned)arg7 parameter5:(unsigned)arg8 ;
-(unsigned)dataPhaseInfo;
-(void)setDataPhaseInfo:(unsigned)arg1 ;
-(unsigned)parameterAtIndex:(unsigned)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(id)description;
@end

