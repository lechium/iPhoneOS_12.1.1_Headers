/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, NSObject, NSArray, NSDate, AVWeakReference;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {

	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSArray* identifiers;
	NSArray* classifyingLabels;
	NSDate* mostRecentlyModifiedMetadataGroupTimestamp;
	AVWeakReference* weakReferenceToPlayerItem;

}
@end

