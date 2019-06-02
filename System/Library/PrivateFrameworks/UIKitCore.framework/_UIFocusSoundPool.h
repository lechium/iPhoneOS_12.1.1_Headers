/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {

	NSURL* _soundFileURL;
	unsigned _originalSystemSoundID;
	NSArray* _queue;
	unsigned long long _queueIndex;

}
-(id)initWithSystemSoundID:(unsigned)arg1 ;
-(id)initWithSoundFileURL:(id)arg1 ;
-(unsigned)playableSystemSoundID;
@end
