/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned deviceID; 
@property (nonatomic,readonly) long long errorCode; 
-(long long)errorCode;
-(id)initWithDeviceID:(unsigned)arg1 errorCode:(long long)arg2 ;
-(unsigned)deviceID;
-(unsigned long long)type;
@end

