/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendPackedVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDTouchEvent event; 
@property (nonatomic,readonly) unsigned long long virtualDeviceID; 
-(unsigned long long)virtualDeviceID;
-(id)initWithTouchEvent:(MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)priority;
-(MRHIDTouchEvent)event;
@end

