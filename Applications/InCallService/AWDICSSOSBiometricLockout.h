//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDICSSOSBiometricLockout : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    struct {
        unsigned int timestamp:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000ea06c
- (unsigned long long)hash;	// IMP=0x00000001000ea030
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e9f7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e9f08
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e9ed8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e9ea8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e9ea0
- (id)dictionaryRepresentation;	// IMP=0x00000001000e9bc8
- (id)description;	// IMP=0x00000001000e9b14
@property(nonatomic) _Bool hasTimestamp;

@end
