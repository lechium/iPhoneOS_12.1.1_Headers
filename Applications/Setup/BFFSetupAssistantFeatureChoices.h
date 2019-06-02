//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface BFFSetupAssistantFeatureChoices : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _runType;	// 16 = 0x10
    _Bool _appAnalyticsChoice;	// 20 = 0x14
    _Bool _deviceAnalyticsChoice;	// 21 = 0x15
    _Bool _iCloudAnalyticsChoice;	// 22 = 0x16
    _Bool _locationServicesChoice;	// 23 = 0x17
    struct {
        unsigned int timestamp:1;
        unsigned int runType:1;
        unsigned int appAnalyticsChoice:1;
        unsigned int deviceAnalyticsChoice:1;
        unsigned int iCloudAnalyticsChoice:1;
        unsigned int locationServicesChoice:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) _Bool iCloudAnalyticsChoice; // @synthesize iCloudAnalyticsChoice=_iCloudAnalyticsChoice;
@property(nonatomic) _Bool appAnalyticsChoice; // @synthesize appAnalyticsChoice=_appAnalyticsChoice;
@property(nonatomic) _Bool deviceAnalyticsChoice; // @synthesize deviceAnalyticsChoice=_deviceAnalyticsChoice;
@property(nonatomic) _Bool locationServicesChoice; // @synthesize locationServicesChoice=_locationServicesChoice;
@property(nonatomic) unsigned int runType; // @synthesize runType=_runType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003af60
- (unsigned long long)hash;	// IMP=0x000000010003ae5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003acc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003ab80
- (void)copyTo:(id)arg1;	// IMP=0x000000010003aa64
- (void)writeTo:(id)arg1;	// IMP=0x000000010003a950
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003a948
- (id)dictionaryRepresentation;	// IMP=0x000000010003a0d4
- (id)description;	// IMP=0x000000010003a020
@property(nonatomic) _Bool hasICloudAnalyticsChoice;
@property(nonatomic) _Bool hasAppAnalyticsChoice;
@property(nonatomic) _Bool hasDeviceAnalyticsChoice;
@property(nonatomic) _Bool hasLocationServicesChoice;
@property(nonatomic) _Bool hasRunType;
@property(nonatomic) _Bool hasTimestamp;

@end
