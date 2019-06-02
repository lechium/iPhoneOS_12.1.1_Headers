/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TLSystemSound : NSObject {

	unsigned _soundID;
	BOOL _shouldDisposeOfSoundID;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;              //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) unsigned soundID; 
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 ;
-(NSURL *)soundFileURL;
-(unsigned)soundID;
-(void)dealloc;
-(id)description;
@end
