//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDSampleListDataProvider.h"

@class NSMutableArray, NSMutableDictionary;

@interface WDSleepListDataProvider : WDSampleListDataProvider
{
    NSMutableDictionary *_sleepData;	// 8 = 0x8
    NSMutableArray *_orderedKeys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100040250
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x000000010004018c
- (void)deleteAllData;	// IMP=0x00000001000400e4
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;	// IMP=0x000000010003ff94
- (id)secondaryTextForObject:(id)arg1;	// IMP=0x000000010003fe98
- (id)textForObject:(id)arg1;	// IMP=0x000000010003fe88
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;	// IMP=0x000000010003fe7c
- (id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;	// IMP=0x000000010003fdd4
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x000000010003fd40
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x000000010003fc9c
- (unsigned long long)numberOfSections;	// IMP=0x000000010003fc84
- (long long)cellStyle;	// IMP=0x000000010003fc7c
- (id)_sleepDataDictionaryFromSamples:(id)arg1;	// IMP=0x000000010003f8bc
- (void)_callUpdateHandler;	// IMP=0x000000010003f6d0
- (id)sampleTypes;	// IMP=0x000000010003f60c

@end
