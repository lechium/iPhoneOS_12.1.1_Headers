//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject
{
    NSString *_descriptionOfInterval;	// 8 = 0x8
    CDUnknownBlockType _dateAfterWhichDataShouldBeClearedBlock;	// 16 = 0x10
    NSString *_aggdIntervalKey;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *aggdIntervalKey; // @synthesize aggdIntervalKey=_aggdIntervalKey;
@property(copy, nonatomic) CDUnknownBlockType dateAfterWhichDataShouldBeClearedBlock; // @synthesize dateAfterWhichDataShouldBeClearedBlock=_dateAfterWhichDataShouldBeClearedBlock;
@property(readonly) NSString *descriptionOfInterval; // @synthesize descriptionOfInterval=_descriptionOfInterval;
- (void).cxx_destruct;	// IMP=0x00000001000b2f48
- (id)description;	// IMP=0x00000001000b2e64
- (id)init;	// IMP=0x00000001000b2e4c
- (id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b2d60

@end

