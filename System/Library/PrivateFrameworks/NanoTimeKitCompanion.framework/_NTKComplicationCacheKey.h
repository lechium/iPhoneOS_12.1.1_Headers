/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTKComplication, NSUUID;

@interface _NTKComplicationCacheKey : NSObject <NSCopying> {

	long long _family;
	NTKComplication* _complication;
	NSUUID* _deviceUUID;

}

@property (readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (readonly) long long family;                            //@synthesize family=_family - In the implementation block
@property (readonly) NSUUID * deviceUUID;                         //@synthesize deviceUUID=_deviceUUID - In the implementation block
+(id)keyWithFamily:(long long)arg1 complication:(id)arg2 forDevice:(id)arg3 ;
-(long long)family;
-(NSUUID *)deviceUUID;
-(NTKComplication *)complication;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
