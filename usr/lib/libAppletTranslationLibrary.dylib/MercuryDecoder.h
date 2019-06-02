/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface MercuryDecoder : NSObject
+(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseActivityTimeout:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)DecodeE1TLV:(const SCD_Struct_Me0*)arg1 transactionInfo:(id*)arg2 error:(id*)arg3 ;
+(id)DecodeE456TLV:(const SCD_Struct_Me0*)arg1 currencyExponent:(id)arg2 error:(id*)arg3 ;
+(void)RemoveMatchedTapIns:(id)arg1 transactionsInProgress:(id)arg2 ;
+(BOOL)IsIncompatibleApplet:(unsigned)arg1 sw:(unsigned short)arg2 ;
+(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
+(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

