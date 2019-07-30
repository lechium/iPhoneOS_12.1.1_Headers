//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBInfoOperand;

@interface SBCompoundInfoOperand : NSObject
{
    SBInfoOperand *_activeOperand;	// 8 = 0x8
    SBInfoOperand *_referenceOperand;	// 16 = 0x10
}

+ (id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2;	// IMP=0x00000001004e6f90
@property(readonly, nonatomic) SBInfoOperand *referenceOperand; // @synthesize referenceOperand=_referenceOperand;
@property(readonly, nonatomic) SBInfoOperand *activeOperand; // @synthesize activeOperand=_activeOperand;
- (void).cxx_destruct;	// IMP=0x00000001004e73d8
- (id)description;	// IMP=0x00000001004e72e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001004e70d0
- (unsigned long long)hash;	// IMP=0x00000001004e7074
@property(readonly, nonatomic, getter=isSectionOperand) _Bool sectionOperand;
- (id)initWithOperand:(id)arg1 operand:(id)arg2;	// IMP=0x00000001004e6ecc

@end
