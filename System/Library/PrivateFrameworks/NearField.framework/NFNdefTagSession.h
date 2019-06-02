/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFNdefTagSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks> {

	NFWeakReference* _delegate;

}

@property (assign) id<NFNdefTagSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned)arg2 ;
-(void)didEndUnexpectedly;
-(BOOL)startEmulation:(id)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)startBluetoothLEPairingWithDeviceAddress:(id)arg1 role:(unsigned char)arg2 optionalOOBData:(id)arg3 ;
-(BOOL)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg1 optionalOOBData:(id)arg2 ;
-(BOOL)startBluetoothLESecureConnectionWithOOBData:(id)arg1 ;
-(BOOL)startEmulation:(id)arg1 withMessageType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)stopEmulationWithError:(id*)arg1 ;
-(BOOL)setTagData:(id)arg1 error:(id*)arg2 ;
-(id)getTagDataWithError:(id*)arg1 ;
-(id)getTagMessageWithError:(id*)arg1 ;
-(BOOL)enableWrite:(BOOL)arg1 error:(id*)arg2 ;
-(void)didTagStateChange:(unsigned)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 ;
-(BOOL)startEmulationWithNdefMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)startEmulation:(id)arg1 error:(id*)arg2 ;
-(BOOL)startEmulation:(id)arg1 withMessageType:(unsigned)arg2 ;
-(BOOL)stopEmulation;
-(BOOL)setTagMessage:(id)arg1 ;
-(BOOL)setTagMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)setTagData:(id)arg1 ;
-(id)getTagData;
-(id)getTagMessage;
-(BOOL)enableWrite:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NFNdefTagSessionDelegate>)arg1 ;
-(id<NFNdefTagSessionDelegate>)delegate;
-(void)endSession;
@end
