/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
@end

