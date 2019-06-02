//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface MAGNamedFilterSet : NSObject <NSCopying>
{
    unsigned long long _identifier;	// 8 = 0x8
}

+ (id)_filterInterpolatingBetweenDarkColor:(id)arg1 lightColor:(id)arg2;	// IMP=0x00000001000169e8
- (unsigned long long)identifier;	// IMP=0x0000000100017634
- (id)filters;	// IMP=0x0000000100016ea0
- (id)filterWhiteColor;	// IMP=0x0000000100016e8c
- (id)filterBlackColor;	// IMP=0x0000000100016e78
- (id)filterYellowColor;	// IMP=0x0000000100016e64
- (id)filterRedColor;	// IMP=0x0000000100016e40
- (id)filterBlueColor;	// IMP=0x0000000100016e1c
- (id)name;	// IMP=0x0000000100016c90
- (unsigned long long)hash;	// IMP=0x0000000100016c84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100016bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100016be8
- (id)initWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100016b98

@end

