//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface TSSubscriptionAction : NSObject <NSCopying>
{
    _Bool _isESIM;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_carrierName;	// 24 = 0x18
}

+ (id)subscriptionActionForSubscriptionSIMStatus:(id)arg1;	// IMP=0x000000010000934c
@property(nonatomic) _Bool isESIM; // @synthesize isESIM=_isESIM;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;	// IMP=0x0000000100009564
@property(readonly, nonatomic) long long actionSubtype;
@property(readonly, nonatomic) long long actionType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009434

@end

