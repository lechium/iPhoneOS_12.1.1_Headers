//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface SSSScreenshotModificationInfo : NSObject <NSSecureCoding>
{
    struct SSSCropInfo _cropInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100006180
@property(nonatomic) struct SSSCropInfo cropInfo; // @synthesize cropInfo=_cropInfo;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100006230
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100006188
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100006098

@end
