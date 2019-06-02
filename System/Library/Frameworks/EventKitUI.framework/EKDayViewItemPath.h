/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EKDayViewItemPath : NSObject <NSCopying> {

	int _section;
	unsigned long long _index;

}

@property (nonatomic,readonly) int section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)section;
-(unsigned long long)index;
@end

