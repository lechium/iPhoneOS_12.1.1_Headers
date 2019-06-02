//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADPreviewCompression : NSObject
{
}

+ (int)readBit:(id)arg1;	// IMP=0x0000000100005074
+ (unsigned short)readBits:(int)arg1 fromData:(id)arg2;	// IMP=0x0000000100005000
+ (id)decompressFromBase64Native:(id)arg1;	// IMP=0x0000000100004b34
+ (int)validFlags:(int)arg1;	// IMP=0x0000000100004b28
+ (int)validOperation:(int)arg1;	// IMP=0x0000000100004b1c
+ (int)validAlgorithm:(int)arg1;	// IMP=0x0000000100004af8
+ (id)processData:(id)arg1 using:(int)arg2 operation:(int)arg3;	// IMP=0x000000010000495c
+ (id)decompressFromBase64:(id)arg1 algorithm:(int)arg2;	// IMP=0x00000001000048bc
+ (id)decompressFromBase64:(id)arg1;	// IMP=0x00000001000048ac
+ (id)compressToBase64:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000010000483c
+ (id)compressToBase64:(id)arg1;	// IMP=0x000000010000482c
+ (id)decompress:(id)arg1 algorithm:(int)arg2;	// IMP=0x000000010000481c
+ (id)decompress:(id)arg1;	// IMP=0x0000000100004808
+ (id)compress:(id)arg1 algorithm:(int)arg2;	// IMP=0x00000001000047b8
+ (id)compress:(id)arg1;	// IMP=0x000000010000476c

@end
