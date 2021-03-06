/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVolumeConfiguration.h>

@protocol SVVolumeConfiguration <NSObject>
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) double volume; 
@required
-(BOOL)muted;
-(double)volume;

@end


@class NSString;

@interface SVVolumeConfiguration : NSObject <SVVolumeConfiguration> {

	BOOL _muted;
	double _volume;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted;                          //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) double volume;                       //@synthesize volume=_volume - In the implementation block
-(BOOL)muted;
-(id)initWithVolume:(double)arg1 muted:(BOOL)arg2 ;
-(double)volume;
@end

