/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _PASLock;

@interface PPBundleIdResolver : NSObject {

	NSString* _exePath;
	_PASLock* _lock;

}
-(id)bundleIdentifierOrProcessName:(BOOL*)arg1 ;
-(id)initWithProcessIdentifier:(int)arg1 ;
@end

