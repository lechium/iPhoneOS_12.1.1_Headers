/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * outputDeviceUIDs; 
-(NSArray *)outputDeviceUIDs;
-(id)initWithOutputDeviceUIDs:(id)arg1 ;
-(unsigned long long)type;
@end
