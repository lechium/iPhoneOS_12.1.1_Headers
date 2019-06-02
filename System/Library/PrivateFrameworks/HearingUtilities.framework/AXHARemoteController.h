/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXIDCRemoteController.h>
#import <libobjc.A.dylib/AXHARemoteControllerProtocol.h>

@protocol OS_dispatch_queue;
@class AXDispatchTimer, NSObject, NSString;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol> {

	NSObject*<OS_dispatch_queue> _receivedPacketQueue;
	BOOL didValidateHIID;
	AXDispatchTimer* _communicationTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL didValidateHIID; 
@property (nonatomic,retain) AXDispatchTimer * communicationTimer;              //@synthesize communicationTimer=_communicationTimer - In the implementation block
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)acceptConnection:(int)arg1 ;
-(void)didCommunicate;
-(void)sendDataChunk;
-(BOOL)outputStreamReady;
-(void)receivedData:(id)arg1 ;
-(void)setCommunicationTimer:(AXDispatchTimer *)arg1 ;
-(void)setDidValidateHIID:(BOOL)arg1 ;
-(AXDispatchTimer *)communicationTimer;
-(BOOL)didValidateHIID;
-(void)validatePairedAid;
-(id)init;
-(void)dealloc;
@end
