/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVQueueFeeder : NSObject
-(unsigned long long)numberOfPaths;
-(id)playbackInfoAtIndex:(unsigned long long)arg1 ;
-(void)contentsDidChangeByInsertingRange:(NSRange)arg1 ;
-(void)contentsDidChangeByRemovingRange:(NSRange)arg1 ;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)arg1 ;
-(double)bookmarkTimeForIndex:(unsigned long long)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)itemCount;
@end

