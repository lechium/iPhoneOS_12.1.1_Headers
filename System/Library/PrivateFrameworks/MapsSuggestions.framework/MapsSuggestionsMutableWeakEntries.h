/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsSuggestions/MapsSuggestions-Structs.h>
@class NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {

	NSPointerArray* _array;
	BOOL _dirty;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)initWithEntries:(NSArray*)arg1 ;
-(void)addWeakObject:(id)arg1 ;
-(id)weakObjectAtIndex:(unsigned long long)arg1 ;
-(NSArray*)strongArray;
-(id)init;
-(unsigned long long)count;
@end
