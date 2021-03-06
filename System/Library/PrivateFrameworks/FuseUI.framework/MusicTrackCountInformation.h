/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicTrackCountInformation : NSObject {

	BOOL _libraryFallback;
	unsigned long long _trackCount;

}

@property (assign,getter=isLibraryFallback,nonatomic) BOOL libraryFallback;              //@synthesize libraryFallback=_libraryFallback - In the implementation block
@property (assign,nonatomic) unsigned long long trackCount;                              //@synthesize trackCount=_trackCount - In the implementation block
-(unsigned long long)trackCount;
-(void)setTrackCount:(unsigned long long)arg1 ;
-(void)setLibraryFallback:(BOOL)arg1 ;
-(BOOL)isLibraryFallback;
@end

