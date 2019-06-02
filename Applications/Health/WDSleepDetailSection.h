//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface WDSleepDetailSection : NSObject
{
    NSString *_headerText;	// 8 = 0x8
    NSAttributedString *_attributedDetailText;	// 16 = 0x10
}

+ (id)sectionWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;	// IMP=0x000000010004a50c
+ (id)sectionWithHeaderText:(id)arg1 detailText:(id)arg2;	// IMP=0x000000010004a458
@property(readonly, copy, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;	// IMP=0x000000010004a714
- (id)initWithHeaderText:(id)arg1 attributedDetailText:(id)arg2;	// IMP=0x000000010004a624
- (id)init;	// IMP=0x000000010004a58c

@end
