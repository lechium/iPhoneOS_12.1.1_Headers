//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBCodable;

@interface BFFStagedMetric : NSObject
{
    unsigned int _metricId;	// 8 = 0x8
    PBCodable *_metric;	// 16 = 0x10
}

@property(retain) PBCodable *metric; // @synthesize metric=_metric;
@property unsigned int metricId; // @synthesize metricId=_metricId;
- (void).cxx_destruct;	// IMP=0x000000010009ec54
- (void)commit;	// IMP=0x000000010009ea9c
- (id)initWithMetricID:(unsigned int)arg1 metric:(id)arg2;	// IMP=0x000000010009ea08

@end

