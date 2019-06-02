//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface _WDGraphSeriesZoomLevelConfigurationManager : NSObject
{
    NSMutableDictionary *_displayTypeIdentifierToConfiguration;	// 8 = 0x8
    NSMutableDictionary *_graphSeriesUUIDToConfiguration;	// 16 = 0x10
    NSMutableArray *_graphSeriesInOrderAdded;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *graphSeriesInOrderAdded; // @synthesize graphSeriesInOrderAdded=_graphSeriesInOrderAdded;
@property(retain, nonatomic) NSMutableDictionary *graphSeriesUUIDToConfiguration; // @synthesize graphSeriesUUIDToConfiguration=_graphSeriesUUIDToConfiguration;
@property(retain, nonatomic) NSMutableDictionary *displayTypeIdentifierToConfiguration; // @synthesize displayTypeIdentifierToConfiguration=_displayTypeIdentifierToConfiguration;
- (void).cxx_destruct;	// IMP=0x00000001001482ec
- (id)_displayTypeIdentifierForDisplayType:(id)arg1;	// IMP=0x0000000100148240
- (id)allGraphSeries;	// IMP=0x0000000100148230
- (id)allDisplayTypes;	// IMP=0x00000001001480b0
- (id)configurationForGraphSeries:(id)arg1;	// IMP=0x0000000100148044
- (id)configurationForDisplayType:(id)arg1;	// IMP=0x0000000100147fdc
- (void)reset;	// IMP=0x0000000100147f80
- (void)removeConfigurationForDisplayType:(id)arg1;	// IMP=0x0000000100147e20
- (void)addConfiguration:(id)arg1;	// IMP=0x0000000100147cb8
- (id)init;	// IMP=0x0000000100147bcc

@end
