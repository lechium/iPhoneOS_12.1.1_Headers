//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSSIMUnlockListCell.h"

@class NSString;

@interface TSSIMUnlockListUnlockedCell : TSSIMUnlockListCell
{
    NSString *_carrierName;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void).cxx_destruct;	// IMP=0x000000010000bb8c
- (void)prepareForReuse;	// IMP=0x000000010000b9b4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010000b824

@end

