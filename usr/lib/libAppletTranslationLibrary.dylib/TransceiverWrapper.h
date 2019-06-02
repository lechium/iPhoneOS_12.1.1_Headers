/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/SETransceiver.h>

@protocol SETransceiver;
@interface TransceiverWrapper : NSObject <SETransceiver> {

	id<SETransceiver> _transceiver;
	CircularBuffer* _circbuff;
	unsigned char _circBuffStorage[4096];

}
+(id)withTransceiver:(id)arg1 ;
-(id)transceive:(id)arg1 error:(id*)arg2 ;
-(id)transceiveAndCheckSW:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyScript:(id)arg1 ignoreSW:(BOOL)arg2 error:(id*)arg3 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 inArray:(id)arg3 error:(id*)arg4 ;
-(id)initWithTransceiver:(id)arg1 ;
-(id)transceiveAndCheckSW:(id)arg1 inArray:(id)arg2 error:(id*)arg3 ;
-(void)dumpAPDUs:(/*^block*/id)arg1 ;
-(BOOL)applyScript:(id)arg1 error:(id*)arg2 ;
@end
