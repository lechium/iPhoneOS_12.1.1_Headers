/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject {

	AVPairedDeviceInternal* _ivars;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * pairedDeviceID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * productName; 
+(id)pairedDevicesConnectedToOutputDevice:(id)arg1 ;
-(NSString *)pairedDeviceID;
-(id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5 ;
-(NSString *)productName;
-(id)ID;
-(NSString *)modelID;
-(void)dealloc;
-(NSString *)name;
-(BOOL)isPlaying;
@end

