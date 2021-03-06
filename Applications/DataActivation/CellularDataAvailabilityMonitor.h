//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface CellularDataAvailabilityMonitor : NSObject
{
    struct __CTServerConnection *_serverConnection;	// 8 = 0x8
    NSTimer *_assumeCellularDataTimer;	// 16 = 0x10
    _Bool _cellularDataAvailable;	// 24 = 0x18
    id <CellularDataAvailabilityMonitorDelegate> _delegate;	// 32 = 0x20
}

@property(readonly, nonatomic, getter=isCellularDataAvailable) _Bool cellularDataAvailable; // @synthesize cellularDataAvailable=_cellularDataAvailable;
@property(nonatomic) __weak id <CellularDataAvailabilityMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000f528
- (void)_updateCellularDataAvailabilityFromStatusDictionary:(id)arg1;	// IMP=0x000000010000f420
- (void)_updateCellularDataAvailability;	// IMP=0x000000010000f3b4
- (void)_clearAssumeCellularDataTimer;	// IMP=0x000000010000f378
- (void)_cellularDataAvailabilityDidTimeout;	// IMP=0x000000010000f318
- (void)dealloc;	// IMP=0x000000010000f2c4
- (id)init;	// IMP=0x000000010000f0e8

@end

