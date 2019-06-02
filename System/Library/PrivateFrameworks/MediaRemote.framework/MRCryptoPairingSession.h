/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCryptoPairingSessionDelegate;
#import <MediaRemote/MediaRemote-Structs.h>
@class _MRDeviceInfoMessageProtobuf, NSArray;

@interface MRCryptoPairingSession : NSObject {

	_MRDeviceInfoMessageProtobuf* _device;
	unsigned long long _role;
	id<MRCryptoPairingSessionDelegate> _delegate;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                                       //@synthesize role=_role - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (assign,nonatomic,__weak) id<MRCryptoPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)device;
-(NSArray *)pairedDevices;
-(unsigned long long)role;
-(BOOL)isPaired;
-(id)init;
-(void)setDelegate:(id<MRCryptoPairingSessionDelegate>)arg1 ;
-(id<MRCryptoPairingSessionDelegate>)delegate;
-(void)open;
-(void)close;
-(BOOL)isValid;
@end
