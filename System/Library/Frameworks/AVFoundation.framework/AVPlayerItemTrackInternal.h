/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSDictionary;

@interface AVPlayerItemTrackInternal : NSObject {

	AVWeakReference* weakReferenceToPlayerItem;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	BOOL figPlaybackItemIsReadyForInspection;
	AVAsset* asset;
	int trackID;
	NSString* videoFieldMode;
	NSDictionary* loudnessInfo;
	NSDictionary* videoEnhancementFilterOptions;
	BOOL enabled;
	BOOL enabledWasSet;
	BOOL disableColorMatching;
	BOOL disableColorMatchingWasSet;
	long long activeHapticChannelIndex;
	BOOL activeHapticChannelIndexWasSet;
	float hapticVolume;
	BOOL hapticVolumeWasSet;

}
@end

