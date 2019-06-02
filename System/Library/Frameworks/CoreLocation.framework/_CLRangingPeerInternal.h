/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _CLRangingPeerInternal : NSObject <NSCopying> {

	unsigned long long _macAddress;
	NSData* _secureRangingKeyID;

}
-(id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

