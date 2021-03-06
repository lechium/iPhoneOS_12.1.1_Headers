/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKTimelapseSettings : NSObject {

	double _initialCaptureTimeInterval;
	double _maxOutputFPS;
	double _maxOutputLength;

}

@property (nonatomic,readonly) double initialCaptureTimeInterval;                 //@synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxOutputFPS;                               //@synthesize maxOutputFPS=_maxOutputFPS - In the implementation block
@property (nonatomic,readonly) double maxOutputLength;                            //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputFrames; 
@property (nonatomic,readonly) long long maxMovieWriteAttempts; 
@property (nonatomic,readonly) long long maxFailedStateReadAttempts; 
+(id)sharedInstance;
-(id)outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 ;
-(double)initialCaptureTimeInterval;
-(long long)maxOutputFrames;
-(double)maxOutputLength;
-(double)maxOutputFPS;
-(double)outputFPSForFrameCount:(long long)arg1 ;
-(long long)maxMovieWriteAttempts;
-(double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1 ;
-(long long)maxFailedStateReadAttempts;
-(id)init;
@end

