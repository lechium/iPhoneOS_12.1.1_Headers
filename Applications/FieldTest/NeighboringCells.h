//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Base.h"

@class NSMutableDictionary;

@interface NeighboringCells : Base
{
    NSMutableDictionary *arfcnToBsic;	// 16 = 0x10
}

- (void)updateWithData:(id)arg1 logCode:(int)arg2;	// IMP=0x000000010000cfa0
- (id)getSectionName;	// IMP=0x000000010000cf94
- (id)getLogCodeArray;	// IMP=0x000000010000cee0
- (id)initWithDict:(id)arg1 codeDict:(id)arg2;	// IMP=0x000000010000ce4c

@end

