/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPlayerFactory.h>

@protocol SVPlayerFactory <NSObject>
@required
-(id)createPlayer;

@end


@protocol SVVolumeProviding;
@class NSString;

@interface SVPlayerFactory : NSObject <SVPlayerFactory> {

	int _audioMode;
	id<SVVolumeProviding> _volumeProvider;

}

@property (nonatomic,readonly) int audioMode;                                     //@synthesize audioMode=_audioMode - In the implementation block
@property (nonatomic,readonly) id<SVVolumeProviding> volumeProvider;              //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)audioMode;
-(id<SVVolumeProviding>)volumeProvider;
-(id)createPlayer;
-(id)initWithAudioMode:(int)arg1 volumeProvider:(id)arg2 ;
@end
